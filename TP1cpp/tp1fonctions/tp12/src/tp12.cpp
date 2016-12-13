//============================================================================
// Name        : tp12.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "validationFormat.h"
using namespace std;

int main()
{
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	bool a;
	string b;
	b="ISSN 0395-2037";
	a=validerFormatNom(b);
	cout << validerCodeIssn(b) <<a << endl;


	return 0;
}
