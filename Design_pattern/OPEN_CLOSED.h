#pragma once
#include<iostream>
using namespace std;

class Invoice_Save {
public:
	virtual void Save(string filename) = 0;
};

class Save_To_Dao : public Invoice_Save
{
public:
	void Save(string filename) {
		cout << "Save to Dao" << endl;
	}
};

class Save_to_File : public Invoice_Save
{
public:
	void Save(string filename) {
		cout << "Save to file" << endl;
	}
};