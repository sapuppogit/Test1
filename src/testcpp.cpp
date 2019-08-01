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
#include "animale.h"
using namespace std;

int main() {
	cout << sum(2.5,4.2) << endl;
	cout << sub(2.5,4.2) << endl;
	cout << mul(2.5,4.2) << endl;
	cout << dividi(2.5,4.2) << endl;

	persona persona[2];
	persona[0] = creaAnimale("Marco", 24);
	persona[1] = creaAnimale("Samuel", 25);
	cout << persona[0].nome << " " << persona[0].eta << endl;
	cout << persona[1].nome << " " << persona[1].eta << endl;

	animale animale[2];
	animale[0] = creaAnimale("Rughetta", 1);
	animale[1] = creaAnimale("Zampetta", 7);
	cout << animale[0].nome << " " << animale[0].eta << endl;
	cout << animale[1].nome << " " << animale[1].eta << endl;

	return 0;
}
