#pragma once
#include <iostream>
#include "pro.h"
#include "computer.h"
using namespace std;
class Processor : public Computer
{
	processor* comp;
	int countComp;


public:

	Processor() {
		countComp = 0;
		comp = new processor[countComp];
	}

	Processor(int value) {
		countComp = value;
		comp = new processor[countComp];
	}
	~Processor() {
		delete[] comp;
	}
	void ProcFill()
	{
		for (int i = 0; i < countComp; i++)
		{
			ofstream file;
			file.open("fileOOP.txt", ios::app);
			if (!file) cout << "smth went wrong";

			cout << "processor: " << i + 1 << endl;
			file << "processor: " << i + 1 << endl;
			cout << " brand of processor:";
			string name;
			cin >> name;
			cout << " clock frequency:";
			int count;
			cin >> count;



			comp[i].setname(name);
			comp[i].setcount(count);


		}
	}



};



