#include <iostream>
#include "klasa.h"
using namespace std;

int main()
{
	List my_list;
	int choice{ 0 };
	while (1)
	{
		cout << "\n1 - dodawanie elementu na poczatku\n2 - dodawanie elementu na koncu\n3 - wyswietlanie\n4 - usuwanie wybranego elemetyu\n5 - usuwanie wszystkich elementow\nwybor: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			my_list.add_first(my_list.counter_, my_list.first_);
			break;
		}
		case 2:
		{
			my_list.add_last(my_list.counter_, my_list.first_);
			break;
		}
		case 3:
		{
			my_list.show(my_list.first_);
			break;
		}
		case 4:
		{
			my_list.remove(my_list.counter_, my_list.first_);
			break;
		}
		case 5:
		{
			my_list.remove_all(my_list.counter_, my_list.first_);
			break;
		}
		}
	}
}