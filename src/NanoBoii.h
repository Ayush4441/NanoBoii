#ifndef NANOBOII_H
#define NANOBOII_H

#include "lib/Display/SSD1306_ESP/SSD1306Wire.h"
#include "lib/Input/EasyButton/EasyButton.h"
#include "lib/Audio/EasyBuzzer/EasyBuzzer.h"

#include "Arduino.h"

//Debug
#define DebugBaudRate 9600

void DebugInit()
{
    Serial.begin(DebugBaudRate);
    Serial.print("\n\n");
}

void DebugLog(const String Text)
{
    Serial.println(Text);
}

void DebugWarning(const String Text)
{
    Serial.println("Warning: " + Text);
}

void DebugError(const String Text)
{
    Serial.println("Error: " + Text);
}

//Display
#define DisplayAddress 0x3c
#define DisplaySDA D2
#define DisplaySCL D1
SSD1306Wire *_display;      //Get an Instance of SSD1306

void DisplayInit()          //Initialize SSD1306Wire
{
    _display = new SSD1306Wire(DisplayAddress, DisplaySDA, DisplaySCL);
    _display->init();
    _display->setFont(ArialMT_Plain_10);
}
void DisplayOn()
{
    _display->displayOn();
}     
void DisplayOff()
{
    _display->displayOff();
}
int16_t ScreenHeight()
{
    return _display->height();
}
int16_t ScreenWidth()
{
    return _display->width();
}
void DisplaySetFont(const uint8_t *font)
{
    _display->setFont(font);
}
void DisplayFlipVertically()
{
    _display->flipScreenVertically();
}
void Display()             
{
    _display->display();
}
void DisplayClear()
{
    _display->clear();
}
//  Text
void DrawString(const String text)
{
    _display->drawString(0, 0, text);
}
void DrawString(int16_t x, int16_t y, const String text)
{
    _display->drawString(x, y, text);
}
void DrawStringf( int16_t x, int16_t y, char* buffer, String format, ... )
{
    va_list myargs;
    va_start(myargs, format);
    vsprintf(buffer, format.c_str(), myargs);
    va_end(myargs);
    _display->drawString(x, y, buffer);
}
//  PolyGone
void DrawRect(int16_t x, int16_t y, int16_t width, int16_t height)
{
    _display->drawRect(x, y, width, height);
}

//Input
#define UPKEY D3
#define DOWNKEY D5
#define LEFTKEY D7
#define RIGHTKEY D6
#define XKEY D4
#define YKEY D10

EasyButton UpKey (UPKEY);
EasyButton DownKey (DOWNKEY);
EasyButton LeftKey (LEFTKEY);
EasyButton RightKey (RIGHTKEY);
EasyButton XKey (XKEY);
EasyButton YKey (YKEY);

void InputInit()
{
    UpKey.begin();
    DownKey.begin();
    LeftKey.begin();
    RightKey.begin();
    XKey.begin();
    YKey.begin();
}

void InputUpdate()
{
    UpKey.update();
    DownKey.update();
    LeftKey.update();
    RightKey.update();
    XKey.update();
    YKey.update();
}

//Audio
#define BuzzerPin D8

void BuzzerInit()
{
    EasyBuzzer.setPin(BuzzerPin);
}

void BuzzerUpdate()
{
    EasyBuzzer.update();
}

void BuzzerBeep(unsigned int frequency)
{
    EasyBuzzer.beep(frequency);
}

void BuzzerStop()
{
    EasyBuzzer.stopBeep();
}

void BuzzerSingleBeep(unsigned int frequency, unsigned int duration)
{
    EasyBuzzer.singleBeep(frequency, duration);
}

#endif