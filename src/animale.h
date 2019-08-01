/*
 * animale.h
 *
 *  Created on: Aug 1, 2019
 *      Author: samuel
 */

struct animale {
	const char* nome;
	int eta;
};

animale creaAnimale (const char* nome, int eta) {
	animale p = {nome, eta};
	return p;
}
