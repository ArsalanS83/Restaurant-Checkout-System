// menudb.cpp
// Implementation of Menu Database Class
// Holds Database of MenuItem Objects
// Arsalan Sadeghpour
// 24/5/13


#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <fstream>
using std::ofstream; // Class For Writing Files
#include "menudb.h"
#include "menuitem.h"


MenuDB::MenuDB()

{		} // Constructor


void MenuDB::addtoVect(string category, string item, double price)
{	
	menuitem.push_back(MenuItem(category, item, price));	// Add Menu Items To Vector
}


void MenuDB::addMenuItem(ofstream& outfile) // Write To Text File
{
	string category; // Get Menu Items From Keyboard
	cout << "\nEnter Category: ";
	cin.ignore();
	getline(cin,category);
	string item;
	cout << "\nEnter Item: ";
	getline(cin,item);
	double price;
	cout << "\nEnter Price: ";
	cin >> price;
	
	outfile << category << ':' << item << ':' << price << endl; // Write Menu Items To Text File
	
	cout << "\n****** Menu Item Added ******\n";
}


void MenuDB::addtoBill() // Add Menu Items To Bill
{

	cout << "\nEnter Item No: ";
	cin >> itemNo;

	cout << "\nEnter Quantity: ";
	cin >> quantity;
	
	total = (menuitem[itemNo-1].getPrice() * quantity) + total; // Calculate & Accumulate Total
}

void MenuDB::calculateBill()	// Display Bill
{
	cout << "\n\n------------------";
	cout << "\n  	Bill" << endl;
	cout << "------------------\n\n";
	cout << "\nTotal =   " << total;
}

