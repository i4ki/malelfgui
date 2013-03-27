#include <iostream>
#include <stdio.h>

#include "Util.h"

Util::Util()
{   
}

QString Util::executeMalelf(QString cmd) {
    FILE* pipe = popen(cmd.toLocal8Bit().data(), "r");
    if (!pipe)
        return "ERROR";
    char buffer[128];
    QString result = "";
    while(!feof(pipe)) {
        if(fgets(buffer, 128, pipe) != NULL)
            result += buffer;
    }
    pclose(pipe);
    return result;
}
