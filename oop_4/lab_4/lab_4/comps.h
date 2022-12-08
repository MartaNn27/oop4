
#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;
class Comps
{
public:
	string name;
	int count;
	int price;


	Comps(void)
	{
		name = "Unknown";
		count = 0;
		price = 0;
	}
	Comps(string a, int b, int c)
	{
		name = a;
		count = b;
		price = c;
	}


	string getname()
	{
		return name;
	}
	int getprice()
	{
		return price;
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
	void setprice(int value)
	{
		price = value;
	}


};

