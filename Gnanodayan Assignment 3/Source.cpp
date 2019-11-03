#include <iostream>
#include <string>
#include "Restaurant.h"
#include "RestaurantList.h"
using namespace std;

int main()
{
	cout << "Welcome to my favorite things! This list involves information about local restaurants and eateries. In these lists, you will find the name of the restaurant, the type of cuisine, a favorite dish, the average cost, and the overall rating. The first set of questions is just a practice round" << endl;

	Restaurant iobject1;
	iobject1.getRestaurantInput();
	cout << iobject1 << endl;

	RestaurantList myList;
	myList.AddItem();
	myList.AddItem();
	myList.AddItem();
	myList.AddItem();

	myList.showList();

	return 0;
}