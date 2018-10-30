// menuitem.cpp
// Implementation of Menu Item Class
// Stores Category, Item And Price Of Menu Item
// Arsalan Sadeghpour
// 24/5/13


#include "menuitem.h"


MenuItem::MenuItem() 
{		}	// Constructor



MenuItem::MenuItem(string category, string item, double price):
category(category), item(item), price(price)
{			}	// Initialisation List


double MenuItem::getPrice()
{
	return price;	 // Get Price From Vector
}
