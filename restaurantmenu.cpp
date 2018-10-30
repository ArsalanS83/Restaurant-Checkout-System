// restaurantmenu.cpp
// Restaurant Menu Program
// Writes Menu Items To The Menu File
// Arsalan Sadeghpour
// 24/5/13

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <fstream>
using std::ofstream; // Class For Writing Files

#include "menuitem.h"
#include "menudb.h"

int main() {

    ofstream toDisk ("menu.txt"); // Create Output File
	int choice;
	char cont;
	
	do {
	
	cout << "\nWelcome To The Restaurant Menu\n\n";
	cout << "1. Add Menu Items\n";
	cout << "2. Exit\n";
	cout << "\nEnter Your Choice: ";
	cin >> choice;
	
	switch (choice) {
		case 1:
			do { // Loop To Add Menu Items
			MenuDB item;
			item.addMenuItem(toDisk); // Write Customer To File
			cout << "\nContinue Adding? Type y/n: "; // Test For Continue
			cin >> cont;
			}while (cont =='y');
    	toDisk.close(); // Close Text File When Finished Writing Menu Items
		break;
		case 2:
		exit(1);
	}
	
	}while (choice !=2);
}

