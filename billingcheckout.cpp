// billingcheckout.cpp
// Billing Checkout Program
// Reads & Displays Menu Items From File
// Arsalan Sadeghpour
// 24/5/13

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw; // Class For Setting Field Width

#include "menudb.h"
#include "menuitem.cpp"


int main() 
{
	
	MenuDB menudb;
	MenuItem menitem;
	
	ifstream fromDisk("menu.txt"); // Open Menu Item File For Reading
	
	string category;
	string item;
	int No = 1;
	int quantity;
	double price;
	string input;
	
	cout << "Welcome To The Restaurant" << endl;
	cout << "\n********* Our Menu ***********\n\n" << endl;
	// Display Table Headers For Menu
	cout << setw(8) << "Item No" << setw(13) << "Category" << setw(12) << "Item" << setw(12) << "Price" << endl;
	cout << "-----------------------------------------------" <<endl;
	
	while(!fromDisk.eof()) { // Read Menu Items If Not At End of File
		getline(fromDisk, category, ':');
		if (fromDisk.eof()) {
			break;
		}
		getline(fromDisk, item,':');
		getline(fromDisk, input, '\n');
		price = atof(input.c_str()); // Convert Price To Float
		
		menudb.addtoVect(category, item, price); // While Reading File Add Menu Items To Vector
		
		cout << setw(6) <<  No << setw(14) <<  category << setw(14) << item << setw(10) << price << endl;
		
		No++; // Increment Item No For Each Record
	}
	
	int choice;
		
	do {	// Displays Menu For Billing Checkout Program
		int choice;
		cout << "\n\n******************";
		cout << "\n1. Add Items";
		cout << "\n2. Calculate Bill";
		cout << "\n3. Exit\n";
		cout << "******************";
		cout << "\n\nEnter Your Choice: ";
		cin >> choice;
		
		
		switch (choice)
		{
			case 1:
			menudb.addtoBill();
			break;
			case 2:
			menudb.calculateBill();
			break;
			case 3:
			exit(1);
			break;
		}
		
	  } 
		while (choice != 3);
		
		getchar(); // Prevents Program Exiting After Calculating Bill
		return 0;
}
	
	

	

