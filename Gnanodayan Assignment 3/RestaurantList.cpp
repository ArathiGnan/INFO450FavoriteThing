#include <iostream>
#include <string>
#include "Restaurant.h"
#include "RestaurantList.h"
using namespace std;

RestaurantList::RestaurantList()
{
	numItems = 0;
}
void RestaurantList::AddItem()
{
	items[numItems].getRestaurantInput();
	numItems++;
}
void RestaurantList::showList()
{
	int i;
	for (i = 0; i < numItems; i++)
	{
		cout << items[i];
	}
}



