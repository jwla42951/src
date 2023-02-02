/*
 * Options.cpp
 *
 *  Created on: 7 Jul 2016
 *      Author: klaus
 */

#include "Options.h"

Options::Options ( )
{
	optA = false;
	optB = false;
}

Options::~Options ( )
{
}

void Options::checkOptions(string opt)
{
	if (opt == "optionA")
	{
		optA = true;
		return;
	}
	if (opt == "optionB")
	{
		optB = true;
		return;
	}
	return;
}
