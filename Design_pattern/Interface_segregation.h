#pragma once
#include<iostream>
using namespace std;

class WaiterInterface {
public:
	virtual void take_order() = 0;
	virtual void serve_order() = 0;
};

class CookInterface {
public:
	virtual void cook_food() = 0;
};

class Waiter :public WaiterInterface {
public:
	void take_order() {
		cout << "take order for waiter class only" << endl;
	}
	void serve_order() {
		cout << "serve order for waiter class only" << endl;
	}
};

class Cook:public CookInterface{
public:
	void cook_food() {
		cout << "cook food for cook class only" << endl;
	}
};
