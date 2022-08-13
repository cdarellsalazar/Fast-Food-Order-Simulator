#include <iostream>
#include "Salad.h"

Salad::Salad()
{
	string ing[2] = { "chopped lettuce" };

	this->setIngredients(ing, 1);
	this->setPrice(5.99);
	this->setName("Simple Salad");
}

Salad::Salad(int s)
{
	this->saladDetails(s);
}

void Salad::setCondiments(string con)
{
	this->condiments = con;
}

void Salad::setDressing(string dress)
{
	this->dressing = dress;
}

void Salad::setSaladNumber(int s)
{
	this->saladNumber = s;
}

string Salad::getDressing()
{
	return this->dressing;
}

string Salad::getCondiments()
{
	return this->condiments;
}

void Salad::saladDetails(int sNum)
{
	switch (sNum)
	{
	case 1:
	{
		this->setName("Parmesan Cesar Salad");

		string in[] = { "chopped lettuce","sartori cheese blend" };
		this->setIngredients(in, 2);

		this->setDressing("Cesar Dressing");
		this->setCondiments("Parmesan Crisps");
		this->setPrice(7.15);

		break;
	}
	case 2:
	{
		this->setName("Apple Pecan Salad");

		string in[] = { "spring mix","apples","cranberries","blue cheese"};
		this->setIngredients(in, 4);

		this->setDressing("Balsamic Vinegar");
		this->setCondiments("Salted Pecans");
		this->setPrice(8.15);

	}
	case 3:
	{
		this->setName("Southwest Avocado Salad");

		string in[] = { "spring mix", "chopped lettuce", "avocado", "tomato","bacon","pepperjack cheese"};
		this->setIngredients(in, 6);

		this->setDressing("Southwest Dressing");
		this->setCondiments("None");
		this->setPrice(8.15);

	}
	}
}

void Salad::displayMenu()
{
	cout << "Salad Menu: " << endl;
	cout << "1. Parmesan Cesar Salad" << endl;
	cout << "2. Apple Pecan Salad" << endl;
	cout << "3. Southwest Avocado Salad" << endl;
}