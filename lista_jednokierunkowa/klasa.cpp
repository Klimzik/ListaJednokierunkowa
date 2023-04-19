#include <iostream>
#include "klasa.h"
using namespace std;

void List::add_first(int& counter, Dataa*& first)
{
	Dataa* newest;
	newest = new Dataa;
	counter++;
	newest->next = first;
	first = newest;
	cout << "podaj liczbe: ";
	cin >> newest->a;
}

void List::add_last(int& counter, Dataa*& first)
{
	Dataa* newest, * wczesniejszy;
	newest = new Dataa;
	if (first == nullptr)
	{
		first = newest;
	}
	counter++;
	wczesniejszy = first;
	cout << "podaj liczbe: ";
	cin >> newest->a;
	newest->next = nullptr;
	while (wczesniejszy->next)					 // ustalanie wczesniejszej struktury zeby wpisac tam adres tej nowej
	{
		wczesniejszy = wczesniejszy->next;
	}
	wczesniejszy->next = newest;
	newest->next = nullptr;
}

void List::show(Dataa*& first)
{
	Dataa* kolejny{ first };
	int i{ 0 };
	while (kolejny != nullptr)
	{
		cout << endl << ++i << ".  Liczba: " << kolejny->a << endl;
		kolejny = kolejny->next;
	}
}

void List::remove(int& counter, Dataa*& first)
{
	if (counter == 0)
		return;
	Dataa* usuwany{ first }, * pomocny{ first }; // pomocny to ten przed usuwanym
	int a{ 0 };		 // a - numer usuwanego elemntu
	do {
		cout << "numer usuwanego elemntu: ";
		cin >> a;
	} while (a > counter || a < 1);
	if (a == 1)
	{
		counter--;
		first = first->next;
		delete usuwany;
		return;
	}
	for (int i = 1; i < a; i++, usuwany = usuwany->next);
	for (int i = 2; i < a; i++, pomocny = pomocny->next);
	pomocny->next = usuwany->next;
	delete usuwany;
	counter--;
}

void List::remove_all(int& counter, Dataa*& first)
{
	Dataa* usuwany{ nullptr };
	int a{ 0 };				 // a - numer usuwanego elemntu
	for (int i{ 0 }; i < counter;)
	{
		usuwany = first;
		counter--;
		first = first->next;
		delete usuwany;
	}
}