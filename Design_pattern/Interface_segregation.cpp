//#include"Interface_segregation.h"
//
//int main() {
//	Waiter waiter;
//	WaiterInterface* waiter_interface = &waiter;
//	waiter_interface->serve_order();
//	waiter_interface->take_order();
//
//	Cook cook;
//	CookInterface* cook_interface = &cook;
//	cook_interface->cook_food();
//
//	return 0;
//}