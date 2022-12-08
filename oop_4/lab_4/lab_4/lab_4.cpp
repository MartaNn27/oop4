
#include <iostream>
#include "Comps.h"
#include "Computer.h"
#include "procesor.h"
#include "HardDrive.h"
#include "pro.h"
#include "Windows.h"
using namespace std;
int main() {


	cout << "count of computer";
	int j;
	cin >> j;

	ofstream file;
	file.open("fileOOP.txt", ios::out, ios::trunc);
	if (!file) {
		cout << "smth went wrong";
	}

	file.close();


	Computer comp(j);
	Processor comp1(j);
	HardDrive comp2(j);

	comp.CompFill();
	comp1.ProcFill();
	comp2.HardFill();



	system("pause");
	return 0;
}
