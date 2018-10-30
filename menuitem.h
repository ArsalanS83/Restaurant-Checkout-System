// menuitem.h
// Menu Item Class
// Stores Category, Item and Price of a Menu Item
// Arsalan Sadeghpour
// 24/5/13

#ifndef MENUITEM_H
#define MENUITEM_H

#include <string>
using std::string;

class MenuItem {
private:
	string category;
	string item;
    double price;
public:
    MenuItem(); 
	MenuItem(string category, string item, double price);
	double getPrice(); 
};
#endif /* MENUITEM_H */

