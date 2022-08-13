#include "Dessert.h"
#include <iostream>

Dessert::Dessert()
{

}

Dessert::Dessert(int s)
{
	this->dessertDetails(s);
}

void Dessert::setType(string t)
{
	this->type = t;
}
void Dessert::setDessertNumber(int nu)
{
	this->dessertNumber = nu;
}

string Dessert::getType()
{
	return this->type;
}

void Dessert::dessertDetails(int desNum)
{
	switch (desNum)
	{
	case 1:
	{
		this->setName("Frosty");

		string in[] = { "milk","vanilla extract","sweetened condensed milk","salt","heavy cream"};
		this->setIngredients(in, 5);

		this->setType("Ice Cream");
		this->setPrice(1.99);

		break;
	}
	case 2:
	{
		this->setName("Chocolate Chip Cookie");

		string in[] = { "brown sugar","sugar","chocolate chips","flour","eggs","vanilla extract" };
		this->setIngredients(in, 6);

		this->setType("Cookie");
		this->setPrice(0.99);

	}
	}
}

void Dessert::displayMenu()
{
	cout << "Dessert Menu: " << endl;
	cout << "1. Frosty " << endl;
	cout << "2. Chocolate Chip Cookie" << endl;
}