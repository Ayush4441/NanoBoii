#include "src/NanoBoii.h"

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

void xKeyPressed()
{
  BuzzerSingleBeep(1590, 10);
}

void setup()
{
  DebugInit();
  InputInit();
  DisplayInit();
  BuzzerInit();
  DisplayFlipVertically();

  if (XKey.supportsInterrupt())
    XKey.enableInterrupt(xKeyPressed);
}

void loop()
{
  InputUpdate();
  BuzzerUpdate();
  DisplayClear();
  if (!gameOver)
  {
    // Move bird
    if (XKey.read())
      birdY -= 5;
    else
      birdY += 2;

    // Draw bird
    DrawRect(birdX, birdY, birdWidth, birdHeight);
    // Move pipe
    pipeX -= 2;
    if (pipeX < -pipeWidth)
    {
      pipeX = ScreenWidth();
      pipeY = random(0, ScreenHeight() - pipeGap - pipeHeight);
      score++;
    }
    // Draw pipe
    DrawRect(pipeX, 0, pipeWidth, pipeY);
    DrawRect(pipeX, pipeY + pipeGap, pipeWidth, ScreenHeight() - pipeY - pipeGap);
    // Check for collision
    if (birdX + birdWidth > pipeX && birdX < pipeX + pipeWidth)
    {
      if (birdY < pipeY || birdY + birdHeight > pipeY + pipeGap)
      {
        gameOver = true;
      }
    }
    if (birdY < 0 || birdY + birdHeight > ScreenHeight())
    {
      gameOver = true;
    }
    // Display score
    DrawString(0, 0, String(score));
    Display();
    // Wait
    delay(50);
  }
  else
  {
    // Game over
    DisplayClear();
    SetFont(ArialMT_Plain_24);
    DrawString(0, 0, "Game Over");
    BuzzerStop();
    SetFont(ArialMT_Plain_16);
    DrawString(64, 45, String(score));
    Display();
    delay(1000);
  }
}
