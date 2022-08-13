#ifndef FOOD
#define FOOD

#include <vector>
#include <string>
#include <ostream>
#include <iostream>

using std::vector;
using std::string;
using std::ostream;
using std::endl;
using std::cout;

class Food
{
protected:
	vector<string> ingredients;
	double price;
	string name;
	double total = 0;

public:
	Food();
	void displayMenu();
	void getIngredients();
	double getPrice();
	string getName();

	void setName(string n);
	void setPrice(double p);
	void setIngredients(string ar[], int size);

	void removeIngredients(string target);
	void addIngredients(string target);
	void modifyIngredients();

	friend ostream& operator<<(ostream& os, const Food& db);
};


#endif
