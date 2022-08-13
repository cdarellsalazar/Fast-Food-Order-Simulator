#include <iostream>
#include "Burger.h"

Burger::Burger()
{
	string ing[2] = { "mayo", "ketchup" };

	this->setIngredients(ing, 2);
	this->setPrice(2.99);
	this->setName("Single Cheese");
	
}

Burger::Burger(int b)
{
	this->burgerDetails(b);
}

void Burger::setBurgerNumber(int num)
{
	this->burgerNumber = num;
}

void Burger::setPatties(int numPat)
{
	this->patties = numPat;
}

int Burger::getPatties()
{
	return this->patties;
}

void Burger::burgerDetails(int bNum)
{
	switch (bNum)
	{
	case 1:
	{
		this->setName("Classic Burger");

		string in[] = { "cheese","mayo","ketchup","pickle","onion","tomato","lettuce" };
		this->setIngredients(in, 7);

		int numPat = this->getPatties();

		if (numPat == 1)
		{
			this->setPrice(5.69);
		}
		else if (numPat == 2)
		{
			this->setPrice(6.69);
		}
		else
		{
			this->setPrice(7.09);
		}
		break;
	}
	case 2:
	{
		this->setName("Bacon Burger");

		string in[] = { "cheese", "mayo", "ketchup" };
		this->setIngredients(in, 3);

		int numPat = this->getPatties();

		if (numPat == 1)
		{
			this->setPrice(4.89);
		}
		else if (numPat == 2)
		{
			this->setPrice(5.76);
		}
		else
		{
			this->setPrice(6.09);
		}
		break;
	}
	case 3:
	{
		this->setName("Bacon Cheddar Burger");

		string in[] = { "cheese","creamy cheddar", "bacon", "bacon jam", "onion tanglers" };
		this->setIngredients(in, 5);

		int numPat = this->getPatties();

		if (numPat == 1)
		{
			this->setPrice(4.89);
		}
		else if (numPat == 2)
		{
			this->setPrice(5.76);
		}
		else
		{
			this->setPrice(6.09);
		}
		break;
	}
	}
}

void Burger::displayMenu()
{
	cout << "Burger Menu: " << endl;
	cout << "1. Classic Burger" << endl;
	cout << "2. Bacon Burger" << endl;
	cout << "3. Bacon Cheddar Burger" << endl;
}
