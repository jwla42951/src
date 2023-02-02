/*
 ============================================================================
 Name        : cPlusPlusJacobPro2
 Author      : Jacob Wærum Lauritzen
 Version     : 0.0.0
 Date		 : 16-11-2022
 Copyright   : GNU General Public License, version 3
 Description : Something something classes
 ============================================================================
 */

#include "Options.h" // to include class with option
#include <iostream> // so I can use console

using namespace std; // get stuff from std namespace

int main (int argC, char **argV) // to make input parameters,
{
	Options op;     // initializing object
	if (argC > 1)   // if argC is larger than 1, is there input parameter, og not?
	{
		//for loop, going igennem arcC
		// check if input paramter is the same as pre-define value
		for (int i = 1; i < argC; i++)
		{
			op.checkOptions (argV[i]);
		}
	}
	// if op.optA and optB is true, then print to console it was set.
	if (op.optA)
	{
		cout << "optionA was set." << endl;
	}
	if (op.optB)
	{
		cout << "optionB was set." << endl;
	}

	/*
	// print parameters,
	cout << argV[1] << endl; // argV is input parameter, [1] is first word
	cout << argV[2] << endl;
	 */


	// don't close the program, wait for key press
	char waitUserInput = 0;
	std::cin >> waitUserInput;
	return 0;
}