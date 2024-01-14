/*
*   fs.h
*/

#pragma once

#include "types.h"

bool mountSd(void);
void unmountSd(void);
bool mountCtrNand(void);
void unmountCtrNand(void);
u32 fileRead(void *dest, const char *path, u32 size, u32 maxSize);
bool fileWrite(const void *buffer, const char *path, u32 size);
bool fileExists(const char* path);
u32 fileReadLine(char *dest, const char *path, u32 lineNum, u32 maxSize);
