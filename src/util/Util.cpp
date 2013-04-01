#include <iostream>
#include <stdio.h>

#include "Util.h"

Util* Util::instance = NULL;

Util* Util::getInstance()
{   
    if(!instance){
        instance = new Util();
        instance->setMalelfPath("/usr/bin/malelf");
    }

    return instance;
}

QString Util::executeMalelf(QString arguments)
{
    QString cmd = this->malelfPath + " " + arguments;

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

QString Util::getMalelfPath()
{
    return this->malelfPath;
}

void Util::setMalelfPath(QString path)
{
    this->malelfPath = path;
}
