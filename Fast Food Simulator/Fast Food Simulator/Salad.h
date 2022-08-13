#ifndef SALAD
#define SALAD

#include <iostream>
#include "Food.h"
using std::cout;

class Salad : public Food
{
private:
	int saladNumber = 0;
	string dressing;
	string condiments;

public:
	Salad();
	Salad(int sNum);

	void setDressing(string dress);
	void setCondiments(string con);
	void setSaladNumber(int s);

	string getDressing();
	string getCondiments();

	void saladDetails(int sNum);
	void displayMenu();
};





#endif
