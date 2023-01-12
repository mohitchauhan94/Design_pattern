#pragma once
#include<iostream>
using namespace std;

class Marker {
public:
	int m_price;
	string m_color;
	string m_name;

	Marker(string name, string color, int price) : m_name(name), m_color(color), m_price(price) {}
};

class Invoice {
	Marker m_marker;
	int m_quantity;
public:
	Invoice(Marker marker, int quantity) : m_marker(marker), m_quantity(quantity) {}

	int calculate_price() {
		return m_marker.m_price * m_quantity;
	}
};

class SaveToDao {
	Invoice m_invoice;
public:
	SaveToDao(Invoice invoice) :m_invoice(invoice) {}

	void Save() {
		cout << " save to db done" << endl;
	}
};

class SaveToPrint {
	Invoice m_invoice;
public:
	SaveToPrint(Invoice invoice) :m_invoice(invoice) {}

	void Save() {
		cout << " print invoice done" << endl;
	}
};