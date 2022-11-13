#include <stdio.h>
#include <windows.h>
#include <windowsx.h>
#include <mmsystem.h>

void playSound() 
{
  PlaySound(TEXT("../audio\\music.wav"), NULL, SND_ASYNC);
}