
#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;
class processor
{
public:
	string name;
	int count;
	int price;


	processor(void)
	{
		name = "Unknown";
		count = 0;
		price = 0;
	}
	processor(string a, int b, int c)
	{
		name = a;
		count = b;
		price = c;
	}


	string getname()
	{
		return name;
	}

	int getcount()
	{
		return count;
	}
	void setname(string value)
	{
		name = value;
	}
	void setcount(int value)
	{
		count = value;
	}



};
