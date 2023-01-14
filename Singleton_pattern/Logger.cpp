#include "Logger.h"

Logger* Logger::m_logger = nullptr;
std::mutex Logger::m_mt;

Logger* Logger::get_instance()
{
    if(m_logger == nullptr)
    {
        m_mt.lock();
        m_logger = new Logger();
        m_mt.unlock();
    }
    return m_logger;
}

void Logger::log(string msg)
{
    cout << msg << endl;
}