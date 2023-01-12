#pragma once
#include<iostream>
#include<mutex>
using namespace std;

class Logger {
	Logger() {};
	static Logger* m_logger;
	static mutex mt;
	Logger(const Logger& obj);
	//Logger operator=(const Logger&);
public:
	static Logger* get_instance();
	void log(string msg) {
		cout << msg << endl;
	}
};