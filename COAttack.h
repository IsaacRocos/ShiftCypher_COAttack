/*
VAZQUEZ SIERRA JOSE ALBERTO
RODRIGUEZ COSME ANGEL

*/

#ifndef _COAttack_H_
#define _COAttack_H_

#include "Archivo.h"
#include "ShiftCypher.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <stdlib.h>

using namespace std;

class COAttack : public ShiftCypher{
public:
	void desencriptarCadena(char*);
	void ataqueFuerzaBruta(char* textoCifrado,Archivo *archivoOUT);
};

#endif
