#include "Food.h"
#include <iostream>
#include <vector>
#include "LinkedList.h"

using namespace std;

Food::Food()
{
	string ing[2] = { "mayo", "ketchup"};
	
	this->setIngredients(ing, 2);
	this->setPrice(2.99);
	this->setName("Single Cheese");
}


void Food::getIngredients()
{
	vector <string>::iterator iter;

	cout << "This item contains the following ingredients: " << endl;

	for (iter = ingredients.begin(); iter < ingredients.end(); iter++)
	{
		cout << *iter << endl;
	}
}

double Food::getPrice()
{
	return this->price;
}

string Food::getName()
{
	return this->name;
}

void Food::setName(string n)
{
	this->name = n;
}

void Food::setPrice(double p)
{
	this->price = p;
}

void Food::setIngredients(string ar[], int size)
{
	this->ingredients.erase(ingredients.begin(),ingredients.end());
	for (int i = 0; i < size; i++)
	{
		this->ingredients.push_back(ar[i]);
	}
}

void Food::removeIngredients(string target)
{
	bool found = false;
	vector <string>::iterator iter;

	for (iter = ingredients.begin(); iter < ingredients.end(); iter++)
	{
		if (*iter == target)
		{
			found = true;
			cout << "Ingredient successfully removed!" << endl;
		}
	}

	if (!found)
	{
		cout << "Ingredient was not found!" << endl;
	}
	remove(ingredients.begin(), ingredients.end(), target);
}

void Food::addIngredients(string target)
{
	ingredients.insert(ingredients.begin(),target);
}

ostream& operator<<(ostream& os, const Food& db)
{
	os << endl;
	os << db.name << endl;
	os << "Price: $" << db.price << endl;

	return os;
}

void Food::displayMenu()
{
	cout << "Main Menu: " << endl;
	cout << "1. Burgers" << endl;
	cout << "2. Salads" << endl;
	cout << "3. Desserts " << endl;
	cout << "8. Remove Items From Order" << endl;
	cout << "9. List Items in Order" << endl;
	cout << "0. Exit" << endl;
	cout << "Please select from the following options: " << endl;
}

void Food::modifyIngredients()
{
	int response;
	string add, remove;

	this->getIngredients();
	cout << "Would you like to add/remove anything? " << endl;
	cout << "1. Add Ingredients" << endl;
	cout << "2. Remove Ingredients" << endl;
	cout << "3. Back to Menu" << endl;
	cout << endl;
	cin >> response;

	switch (response)
	{
	case 1:
	{
		cout << "What ingredient would you like to add? " << endl;
		cin >> add;
		this->addIngredients(add);
		break;
	}
	case 2:
	{
		cout << "What ingredient would you like to remove? " << endl;
		cin >> remove;
		this->removeIngredients(remove);
		break;
	}
	case 3: 
	{
		return;
	}
	}
}