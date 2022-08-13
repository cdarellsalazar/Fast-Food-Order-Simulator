#include "LinkedList.h"
#include "Food.h"
#include "Burger.h"
#include <iostream>
#include "Salad.h"
#include "Dessert.h"

using namespace std;

void showMenu();

int main()
{
	LinkedList<Food> order;

	cout << "Welcome to the Fast Food Order Simulator!" << endl;

	Food menu;
	Burger b;
	Salad s;
	Dessert d;

	int rem;
	int input = -1;
	int choice = 0;
	double total = 0;

	while (input != 0)
	{
		menu.displayMenu();
		cin >> input;

		switch (input)
		{
		case 0:
		{
			input = 0;
			break;
		}
		case 1:
		{
			b.displayMenu();
			cin >> choice;
			if (choice <= 3)
			{
				Burger bur(choice);
				bur.modifyIngredients();
				order.addItem(bur);
				total = total + bur.getPrice();
			}
			else
			{
				cout << "ERROR: Please enter an option between 1 - 3." << endl;
			}
			break;
		}
		case 2:
		{
			s.displayMenu();
			cin >> choice;
			if (choice <= 3)
			{
				Salad sal(choice);
				sal.modifyIngredients();
				order.addItem(sal);
				total = total + sal.getPrice();
			}
			else
			{
				cout << "ERROR: Please enter an option between 1 - 3." << endl;
			}
			break;
		}
		case 3:
		{
			d.displayMenu();
			cin >> choice;
			if (choice <= 2)
			{
				Dessert des(choice);
				des.modifyIngredients();
				order.addItem(des);
				total = total + des.getPrice();
			}
			else
			{
				cout << "ERROR: Please enter an option between 1 - 3." << endl;
			}
			break;
		}
		case 8:
		{
			order.listItems();
			cout << "Please enter which numbered item you'd like to remove: " << endl;
			cin >> rem;

			total = total - order.removeItem(rem - 1);

			cout << "Here is your updated order: " << endl;
			order.listItems();
			cout << "Your total is: $" << total << endl;
			break;

		}
		case 9:
		{
			order.listItems();
			cout << "Your total is: $" << total << endl;
			break;
		}
		default:
		{
			cout << "ERROR: Please select an option from the menu." << endl;
		}
		}
	}
	return 0;
}