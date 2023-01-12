#include<iostream>
#include"Dependency_inversion.h"
using namespace std;
enum principle {
	SINGLE_RESPONSIBLE,
	OPEN_CLOSED,
	LISKOV_SUBSTITUTION,
	INTERFACE_SEGREGATION,
	DEPENDENCY_INVERSION
};

int main() {
	int solid_principle;
	cin >> solid_principle;
	switch (solid_principle)
	{
	case SINGLE_RESPONSIBLE:
		break;
	case OPEN_CLOSED:
		break;
	case LISKOV_SUBSTITUTION:
		break;
	case INTERFACE_SEGREGATION:
		break;

	case DEPENDENCY_INVERSION:
		cout << "DEPENDENCY_INVERSION" << endl;
		WiredKeyboard wired_keyboad;
		Keyboard* keyboard = &wired_keyboad;
		WiredMouse wired_mouse;
		Mouse* mouse = &wired_mouse;
		Laptop laptop(mouse, keyboard);
		laptop.keyboard_type();
		laptop.mouse_type();
		break;

	default:
		break;
	}

	return 0;
}