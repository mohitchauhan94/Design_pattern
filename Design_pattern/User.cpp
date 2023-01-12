//#include "Logger.h"
//#include<thread>
//
//void UserLogger1() {
//	Logger* logger1 = Logger::get_instance();
//	logger1->log("logger object created");
//}
//
//void UserLogger2() {
//	Logger* logger2 = Logger::get_instance();
//	logger2->log("logger object created");
//}
//
//int main() {
//
//	std::thread user1(UserLogger1);
//	std::thread user2(UserLogger2);
//
//	user1.join();
//	user2.join();
//
//	return 0;
//}