
#pragma once
#include <iostream>
#include "Computer.h"
#include "Hards.h"
using namespace std;
class HardDrive : public Computer
{
	Hards* Hard;
	int countHards;


public:

	HardDrive() {
		countHards = 0;
		Hard = new Hards[countHards];
	}

	HardDrive(int value) {
		countHards = value;
		Hard = new Hards[countHards];
	}
	~HardDrive() {
		delete[] Hard;
	}
	void HardFill()
	{
		for (int i = 0; i < countHards; i++)
		{
			ofstream file;
			file.open("fileOOP.txt", ios::app);
			if (!file) cout << "smth went wrong";

			cout << "hard drive: " << i + 1 << endl;
			file << "hard drive: " << i + 1 << endl;

			cout << "amount of memory: ";
			file << "amount of memory: ";
			int count;
			cin >> count;
			file << count;




			Hard[i].setstorage(count);


		}
	}



};
