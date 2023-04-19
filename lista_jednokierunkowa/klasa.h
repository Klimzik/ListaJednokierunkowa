#include <iostream>
using namespace std;

class Dataa {
public:
	int a;
	Dataa* next{ nullptr };
};

class List {
public:
	Dataa* first_{ nullptr };
	int counter_;
	void remove(int& counter, Dataa*& first);
	void remove_all(int& counter, Dataa*& first);
	void show(Dataa*& first);
	void add_last(int& counter, Dataa*& first);
	void add_first(int& counter, Dataa*& first);
};
