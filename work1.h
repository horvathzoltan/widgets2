#ifndef WORK1_H
#define WORK1_H


#include <QString>

struct Work1Params{
public:
    QString inFile;
    QString outFile;
    bool isBackup;
};

class Work1
{
public:
    Work1();
    static int doWork();
    static Work1Params params;
};

#endif // WORK1_H
