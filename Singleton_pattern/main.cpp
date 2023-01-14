#include "Logger.h"
#include <thread>

void print_logger_1()
{
    Logger *logger1 = Logger::get_instance();
    logger1->log("print logger for first one");
}

void print_logger_2()
{
    Logger *logger2 = Logger::get_instance();
    logger2->log("print logger for second one");
}

int main()
{
    std::thread t1(print_logger_1);
    std::thread t2(print_logger_2);

    t1.join();
    t2.join();

    return 0;
}