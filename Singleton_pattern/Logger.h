#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <mutex>
using namespace std;

class Logger
{
    static Logger *m_logger;
    static mutex m_mt;
    Logger(){}
    Logger(const Logger& obj);

    public:
        static Logger* get_instance();
        void log(string);
};

#endif