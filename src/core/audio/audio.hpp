#pragma once

#include <stdio.h>
#include <windows.h>
#include <windowsx.h>
#include <mmsystem.h>
#include <tchar.h>


template<typename T>
void playAudio(T path) {
  PlaySound(path, NULL, SND_FILENAME | SND_ASYNC);
}