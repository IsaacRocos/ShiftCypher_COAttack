#ifndef _ShiftCypher_H
#define _ShiftCypher_H

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <stdlib.h>

class ShiftCypher{
public:
	char* encriptarCadena(char* cadena,char llave);
	char* desEncriptarCadena(char* cadena, char llave);
	char  mapear(char caracter,int llave);
};

#endif
