// #include "src/NanoBoii.h"

// void setup()
// {
//   DebugInit();
//   InputInit();
//   DisplayInit();
//   BuzzerInit();
//   DisplayFlipVertically();
//   DebugLog("Testing .. 1 .. 2 .. 3");

//   if (UpKey.supportsInterrupt())
//     UpKey.enableInterrupt(upKeyPressed);
//   if (DownKey.supportsInterrupt())
//     DownKey.enableInterrupt(downKeyPressed);
//   if (LeftKey.supportsInterrupt())
//     LeftKey.enableInterrupt(leftKeyPressed);
//   if (RightKey.supportsInterrupt())
//     RightKey.enableInterrupt(rightKeyPressed);
//   if (XKey.supportsInterrupt())
//     XKey.enableInterrupt(xKeyPressed);
//   if (YKey.supportsInterrupt())
//     YKey.enableInterrupt(yKeyPressed);
// }

// void upKeyPressed()
// {
//   BuzzerSingleBeep(2230, 100);
// }

// void downKeyPressed()
// {
//   BuzzerSingleBeep(1870, 100);
// }

// void leftKeyPressed()
// {
//   BuzzerSingleBeep(1660, 100);
// }

// void rightKeyPressed()
// {
//   BuzzerSingleBeep(2430, 100);
// }

// void xKeyPressed()
// {
//   BuzzerSingleBeep(1590, 10);
// }

// void yKeyPressed()
// {
//   BuzzerSingleBeep(1590, 100);
// }

// void loop()
// {
//   InputUpdate();
//   BuzzerUpdate();

//   DisplayClear();
//   DrawString("--Input Test--");
//   DrawString(0, 15, "Up: ");
//   DrawString(30, 15, UpKey.read() ? "On" : "Off");
//   DrawString(0, 25, "Down: ");
//   DrawString(30, 25, DownKey.read() ? "On" : "Off");
//   DrawString(0, 35, "Left: ");
//   DrawString(30, 35, LeftKey.read() ? "On" : "Off");
//   DrawString(0, 45, "Right: ");
//   DrawString(30, 45, RightKey.read() ? "On" : "Off");
//   DrawString(64, 30, "X: ");
//   DrawString(80, 30, XKey.read() ? "On" : "Off");
//   DrawString(64, 40, "Y: ");
//   DrawString(80, 40, YKey.read() ? "On" : "Off");
//   Display();
// }
