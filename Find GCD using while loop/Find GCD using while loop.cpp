// Find GCD using while loop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n1, n2, hcf;
	cout << "Enter two numbers: ";
	cin >> n1 >> n2;

	while (n1 != n2)
	{
		if (n1 > n2)
			n1 -= n2;
		else
			n2 -= n1;
	}

	cout << "HCF = " << n2 << endl;
    return 0;
}

