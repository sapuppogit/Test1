/*
 * persona.h
 *
 *  Created on: Aug 1, 2019
 *      Author: samuel
 */

struct persona {
	const char* nome;
	int eta;
};

persona creaPersona (const char* nome, int eta) {
	persona p = {nome, eta};
	return p;
}
