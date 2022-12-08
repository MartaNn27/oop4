
#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;
class Hards
{
public:


	int storage;


	Hards(void)
	{

		storage = 0;

	}
	Hards(int b)
	{
		storage = b;
	}



	int getstorage()
	{
		return storage;
	}

	void setstorage(int value)
	{
		storage = value;
	}



};
