#pragma once
#include<iostream>
using namespace std;

class Mouse {
public:
	virtual void mouse_type() = 0;
};

class WiredMouse : public Mouse {
public:
	void mouse_type();
};

class Keyboard
{
public:
	virtual void keyboard_type() = 0;
};

class WiredKeyboard : public Keyboard {
public:
	void keyboard_type();
};

class Laptop {
	Mouse *m_mouse;
	Keyboard *m_keyboard;
public:
	Laptop(Mouse *mouse, Keyboard *keyboard) :m_mouse(mouse), m_keyboard(keyboard) {
	}
	void keyboard_type();
	void mouse_type();
};