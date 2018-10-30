// menudb.h
// Menu Database Class
// Holds Database of MenuItem Objects
// Arsalan Sadeghpour
// 24/5/13

#include <vector>
using std::vector;
#include <fstream>
using std::ofstream;
using std::ifstream;

#include "menuitem.h"

#ifndef MENUDB_H
#define MENUDB_H

class MenuDB {
	private:
	vector <MenuItem> menuitem;
	int itemNo;
	int quantity;
	float total;
	public:
	MenuDB();
	void addtoVect(string category, string item, double price);
	void addMenuItem(ofstream& outfile);
	void addtoBill();
	void calculateBill();
};
#endif /* MENUDB_H */	  

