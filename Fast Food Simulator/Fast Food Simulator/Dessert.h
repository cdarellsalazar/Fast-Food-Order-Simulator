#ifndef DESSERT
#define DESSERT
#include <iostream>
#include "Food.h"
using std::cout;

class Dessert : public Food
{
private:
	int dessertNumber;
	string type;
public:
	Dessert();
	Dessert(int s);

	void setType(string t);
	void setDessertNumber(int nu);

	string getType();
	void dessertDetails(int desNum);

	void displayMenu();
};

#endif