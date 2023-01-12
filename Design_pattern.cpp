SOLID principles:

S: single responsibility principle:
responsible for single use means a class or function should have one and only one reason to change
///////single responsibility priciple///////////////////

#include<iostream>
using namespace std;
class Marker{
	int m_id;
	string m_name;
	int m_price;
	public:
		Marker(){
		}
		Marker(int id, string name, int price){
			m_id=id;
			m_name=name;
			m_price=price;
		}
		void save_to_db(){
			cout << "save done" << endl;
		}
		void print(){
			cout << "print done" << endl;
		}
		int get_price(){
			return m_price;
		}
};
class Invoice{
	Marker m_marker;
	int m_quantity;
	public:
		Invoice(){
		}
		Invoice(Marker marker, int quantity){
			m_marker=marker;
			m_quantity=quantity;
		}
		int calculate_price(){
			return m_marker.get_price()*m_quantity;
		}
};
class Invoice_Print{
	Invoice m_invoice;
	public:
		Invoice_Print(Invoice invoice){
			m_invoice=invoice;
		}
		void print_invoice(){
			cout << "print invoice done" << endl;
		}
};
class Invoice_Dao{
	Invoice m_invoice;
	public:
		Invoice_Dao(Invoice invoice){
			m_invoice=invoice;
		}
		void save_to_db(){
			cout << "save invoice to db done" << endl;
		}
};
int main(){
	Marker marker(1, "blue", 50);
	Invoice invoice(marker, 5);
	Invoice_Print invoice_print(invoice);
	invoice_print.print_invoice();
	Invoice_Dao invoice_dao(invoice);
	invoice_dao.save_to_db();
	cout << invoice.calculate_price();
	return 0;
}

O: open-closed principle:
open for extension and close for modification. using interfaces for extension.

#include<iostream>
using namespace std;
class Marker{
	int m_id;
	string m_name;
	int m_price;
	public:
		Marker(){
		}
		Marker(int id, string name, int price){
			m_id=id;
			m_name=name;
			m_price=price;
		}
		void save_to_db(){
			cout << "save done" << endl;
		}
		void print(){
			cout << "print done" << endl;
		}
		int get_price(){
			return m_price;
		}
};
class Invoice{
	Marker m_marker;
	int m_quantity;
	public:
		Invoice(){
		}
		Invoice(Marker marker, int quantity){
			m_marker=marker;
			m_quantity=quantity;
		}
		int calculate_price(){
			return m_marker.get_price()*m_quantity;
		}
};
class Invoice_Print{
	Invoice m_invoice;
	public:
		Invoice_Print(Invoice invoice){
			m_invoice=invoice;
		}
		void print_invoice(){
			cout << "print invoice done" << endl;
		}
		void save();
};
class Invoice_Dao{
	public:
		virtual void save(Invoice)=0;
};
class Invoice_save_db:public Invoice_Dao{
	public:
		void save(Invoice invoice_save_db){
			cout << "save to db done" << endl;
		}
};
class Invoice_save_file:public Invoice_Dao{
	public:
		void save(Invoice invoice_save_file){
			cout << "save to file done" << endl;
		}
};
int main(){
	Marker marker(1, "blue", 50);
	Invoice invoice(marker, 5);
	cout << invoice.calculate_price() << endl;
	Invoice_Print invoice_print(invoice);
	invoice_print.print_invoice();
	Invoice_save_db invoice_save_db;
	invoice_save_db.save(invoice);
	Invoice_save_file invoice_save_file;
	invoice_save_file.save(invoice);

	return 0;
}

L: liskov substitution principle:
subtypes must be substitutable for their base typs. be careful with inheritance, use only if superclass is replaceable with subclass in all the instances.

I: interface segregation principle:
dependency of one class to another one should depend on smallest possible interface.
client should not be forced to implement interfaces they don't use.

D: dependency inversion principle:
depends upon interfaces rather than concrete class.
 
#include<iostream>
using namespace std;
class Keyboard{
public:
	virtual void press()=0;
};
class Wired_Keyboard:public Keyboard{
public:
	void press(){
		cout << "press key from Wired keyboard"<<endl;
	}
};
class Bluetooth_Keyboard:public Keyboard{
public:
	void press(){
		cout << "press key from bluetooth keyboard"<<endl;
	}
};
class Mouse{
public:
	virtual void press()=0;
};
class Wired_Mouse:public Mouse{
public:
	void press(){
		cout << "press key from Wired Mouse"<<endl;
	}
};
class Bluetooth_Mouse:public Mouse{
public:
	void press(){
		cout << "press key from bluetooth Mouse"<<endl;
	}
};
class Macbook{
Keyboard *m_keyboard;
Mouse *m_mouse;
public:
	Macbook(Keyboard *keyboard, Mouse *mouse){
		m_keyboard=keyboard;
		m_mouse=mouse;
	}
	void press(){
		m_keyboard->press();
		m_mouse->press();
	}
};
 
int main(){
Keyboard *keyboard = new Bluetooth_Keyboard();
Mouse *mouse = new Bluetooth_Mouse();
Macbook macbook(keyboard, mouse);
macbook.press();
 
return 0;
}