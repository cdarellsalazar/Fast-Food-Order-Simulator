#ifndef BURGER
#define BURGER

#include "Food.h"
#include <iostream>
using std::cout;

class Burger : public Food
{
private:
	int patties;
	int burgerNumber;
public:
	Burger();
	Burger(int b);

	void setBurgerNumber(int num);
	void setPatties(int numPat);

	int getPatties();
	void burgerDetails(int bNum);
	void displayMenu();
};

#endif