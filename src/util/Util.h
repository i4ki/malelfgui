#ifndef UTIL_H
#define UTIL_H

#include <QString>

class Util
{
public:
    static Util* getInstance();
    QString executeMalelf(QString cmd);

    QString getMalelfPath();
    void setMalelfPath(QString);

private:
    Util(){}
    static Util* instance;

    QString malelfPath;
};

#endif // UTIL_H
