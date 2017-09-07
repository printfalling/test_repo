// git_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int output()
{
	for (size_t i = 0; i < 20; i++)
	{
		cout << '*';
	}
	cout << endl;
	return 0;
}

int main()
{
	cout << "Hello world!" << endl;
	output();
    return 0;
}



