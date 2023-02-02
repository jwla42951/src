/*
 * main.cpp
 *
 *  Jacob
 *      Author: Jacob Wærum Lauritzen
 */

#include "Options.h"
#include <iostream>

using namespace std; // get stuff from std namespace

int main (int argC, char **argV) // to make input parameters,
{
	Options op;
	if (argC > 1)
	{
		for (int i = 1; i < argC; i++)
		{
			op.checkOptions (argV[i]);
		}
	}
	if (op.optA)
	{
		cout << "optionA was set." << endl;
	}
	if (op.optB)
	{
		cout << "optionB was set." << endl;
	}

	/*
	// print parameters
	cout << argV[1] << endl;
	cout << argV[2] << endl;
	 */
	
	char waitUserInput = 0;
	std::cin >> waitUserInput;
	return 0;
}