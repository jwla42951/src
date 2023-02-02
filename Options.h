//
// Created by polya on 02-02-2023.
//

#ifndef EXCERCICE2_OPTION_H
#define EXCERCICE2_OPTION_H

#include <string>

using namespace std;

class Options
{
public:
	Options ();
	virtual ~Options ();
	void checkOptions(string opt);

	bool optA; // Class variable
	bool optB; // Class variable
};

#endif //EXCERCICE2_OPTION_H