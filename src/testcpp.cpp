//============================================================================
// Name        : cpp.cpp
// Author      : sapuppogit
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "calcolatrice.h"
#include "persona.h"
using namespace std;

int main() {
	cout << sum(2.5,4.2) << endl;
	cout << sub(2.5,4.2) << endl;
	cout << mul(2.5,4.2) << endl;
	cout << dividi(2.5,4.2) << endl;

	persona persona[2];
	persona[0] = creaPersona("Marco", 24);
	persona[1] = creaPersona("Samuel", 25);
	cout << persona[0].nome << " " << persona[0].eta << endl;
	cout << persona[1].nome << " " << persona[1].eta << endl;
	return 0;
}
