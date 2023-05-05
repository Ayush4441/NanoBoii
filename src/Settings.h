#ifndef SETTINGS_H
#define SETTINGS_H

#include "Arduino.h"

char UserName[5] = "USER";

void SetUserName(const char* name)
{
    strncpy(UserName, name, sizeof(UserName));
}

const char* GetUserName()
{
    return UserName;
}

#endif
