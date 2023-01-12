#include"Dependency_inversion.h"

void WiredMouse::mouse_type() {
	cout << "wired mouse" << endl;
}

void WiredKeyboard::keyboard_type() {
	cout << "wired keyboard" << endl;
}

void Laptop::keyboard_type() {
	m_keyboard->keyboard_type();
}
void Laptop::mouse_type() {
	m_mouse->mouse_type();
}