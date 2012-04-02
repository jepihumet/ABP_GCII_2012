#ifndef LOG_H
#define LOG_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Log
{
public:
    Log();
    void writeLog(string s);

private:
    vector<string> logger;
};

#endif // LOG_H
