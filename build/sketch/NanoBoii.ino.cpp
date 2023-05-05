#include <Arduino.h>
#line 1 "D:\\Projects\\Arduino Projects\\NanoBoii\\NanoBoii.ino"
#include "src/NanoBoii.h"
#include "src/Settings.h"

#include "MenuButton.h"

char selectedbutton = 0;
bool haspressed = false;
bool hasrelesed = true;

#line 10 "D:\\Projects\\Arduino Projects\\NanoBoii\\NanoBoii.ino"
void UpdateStatusMenu();
#line 17 "D:\\Projects\\Arduino Projects\\NanoBoii\\NanoBoii.ino"
void UpdateMenu();
#line 24 "D:\\Projects\\Arduino Projects\\NanoBoii\\NanoBoii.ino"
void IncrementSelect();
#line 36 "D:\\Projects\\Arduino Projects\\NanoBoii\\NanoBoii.ino"
void DecrementSelect();
#line 48 "D:\\Projects\\Arduino Projects\\NanoBoii\\NanoBoii.ino"
void setup();
#line 72 "D:\\Projects\\Arduino Projects\\NanoBoii\\NanoBoii.ino"
void loop();
#line 10 "D:\\Projects\\Arduino Projects\\NanoBoii\\NanoBoii.ino"
void UpdateStatusMenu()
{
    DrawString(0, 0, GetUserName());
    DrawString(75, 0, CurrentDateInString());
    DrawLineX(0, 11, ScreenWidth());
}

void UpdateMenu()
{
    DrawFastImage(10, 24, 32, 32, (selectedbutton == 0 ? haspressed ? PlayButton_Pressed : PlayButton_Selected : PlayButton_Normal));
    DrawFastImage(42, 24, 32, 32, (selectedbutton == 1 ? haspressed ? SettingButton_Pressed : SettingButton_Selected : SettingButton_Normal));
    DrawFastImage(74, 24, 32, 32, (selectedbutton == 2 ? haspressed ? Favorite_Pressed : Favorite_Selected : Favorite_Normal));
}

void IncrementSelect()
{
    if(hasrelesed)
        return;

    selectedbutton++;
    BuzzerSingleBeep(1024, 10);
    
    if (selectedbutton > 2)
        selectedbutton = 2;
}

void DecrementSelect()
{
    if(hasrelesed)
        return;

    selectedbutton--;
    BuzzerSingleBeep(2048, 10);

    if (selectedbutton < 0)
        selectedbutton = 0;
}

void setup()
{
    DebugInit();
    InputInit();
    DisplayInit();
    BuzzerInit();
    DisplayFlipVertically();

    SetFont(ArialMT_Plain_10);

    if (RightKey.supportsInterrupt())
        RightKey.enableInterrupt(IncrementSelect);
    if (DownKey.supportsInterrupt())
        DownKey.enableInterrupt(IncrementSelect);

    if (LeftKey.supportsInterrupt())
        LeftKey.enableInterrupt(DecrementSelect);
    if (UpKey.supportsInterrupt())
        UpKey.enableInterrupt(DecrementSelect);

    haspressed = XKey.wasPressed();
    hasrelesed = XKey.wasReleased();
}

void loop()
{
    InputUpdate();
    BuzzerUpdate();

    DisplayClear();

    UpdateStatusMenu();
    UpdateMenu();

    Display();
}
