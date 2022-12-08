#pragma once
#include <iostream>
#include "comps.h"
#include <fstream>
using namespace std;
class Computer
{
	Comps* comp;
	int countComp;


public:

	Computer()
	{
		comp = new Comps[countComp];
		countComp = 0;
	}

	Computer(const Computer& object)
	{

		comp = new Comps[countComp];
	}

	Computer(int value) {
		countComp = value;
		comp = new Comps[countComp];
	}
	~Computer() {
		delete[] comp;
	}
	void CompFill()
	{
		ofstream file;
		file.open("fileOOP.txt", ios::app);
		if (!file) cout << "smth went wrong";

		for (int i = 0; i < countComp; i++)
		{
			file << i + 1 << " computer" << endl;
			cout << i + 1 << " computer" << endl;
			cout << "model:";
			file << "model:";
			string name;
			cin >> name;
			file << name;
			file << "\n";
			cout << " count: ";
			file << "count: ";
			int count;
			cin >> count;
			file << count;
			file << "\n";

			cout << "price: ";
			file << " price: ";
			int price;
			cin >> price;
			file << price;
			file << "\n";


			comp[i].setname(name);
			comp[i].setcount(count);
			comp[i].setprice(price);

		}
	}


};
