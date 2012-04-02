#include "Log.h"

Log::Log()
{

}

void Log::writeLog(string s)
{
    logger.push_back(s);
}
