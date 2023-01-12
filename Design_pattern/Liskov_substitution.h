#pragma once
#include<iostream>
using namespace std;

class Shape {
public:
	virtual int area() = 0;
	virtual int perimeter() = 0;
};

class Rectangle : public Shape
{
	int m_length;
	int m_width;
public:
	Rectangle(int length, int width) : m_length(length), m_width(width) {
	}

	int area() {
		return m_length * m_width;
	}

	int perimeter() {
		return 2 * (m_length + m_width);
	}
};

class Square : public Shape
{
	int m_side;
public:
	Square(int side):m_side(side){}

	int area() {
		return m_side * m_side;
	}

	int perimeter() {
		return 4 * m_side;
	}	
};

