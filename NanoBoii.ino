#include "src/NanoBoii.h"

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

void xKeyPressed()
{
  BuzzerSingleBeep(1590, 10);
}

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

const int birdWidth = 8;
const int birdHeight = 8;
int birdX = 16;
int birdY = 16;
const int pipeWidth = 8;
const int pipeHeight = 32;
int pipeX = 64;
int pipeGap = 24;
int pipeY = 0;
int score = 0;
bool gameOver = false;

const int buttonPin = D1;

void setup() {
  DebugInit();
  InputInit();
  DisplayInit();
  BuzzerInit();
  DisplayFlipVertically();

  if (XKey.supportsInterrupt())
    XKey.enableInterrupt(xKeyPressed);
}

void loop() {
  InputUpdate();
  BuzzerUpdate();
  DisplayClear();
  if (!gameOver) {
    // Move bird
    if (XKey.read())
      birdY -= 5;
    else
      birdY += 2;

    // Draw bird
    DrawRect(birdX, birdY, birdWidth, birdHeight);
    // Move pipe
    pipeX -= 2;
    if (pipeX < -pipeWidth) {
      pipeX = ScreenWidth();
      pipeY = random(0, ScreenHeight() - pipeGap - pipeHeight);
      score++;
    }
    // Draw pipe
    DrawRect(pipeX, 0, pipeWidth, pipeY);
    DrawRect(pipeX, pipeY + pipeGap, pipeWidth, ScreenHeight() - pipeY - pipeGap);
    // Check for collision
    if (birdX + birdWidth > pipeX && birdX < pipeX + pipeWidth) {
      if (birdY < pipeY || birdY + birdHeight > pipeY + pipeGap) {
        gameOver = true;
      }
    }
    if (birdY < 0 || birdY + birdHeight > ScreenHeight()) {
      gameOver = true;
    }
    // Display score
    DrawString(0, 0, String(score));
    Display();
    // Wait
    delay(50);
  } else {
    // Game over
    DisplayClear();
    DrawString(32, 32, "Game Over");
    BuzzerStop();
    DrawString(64, 50, String(score));
    Display();
    delay(1000);
  }
}
