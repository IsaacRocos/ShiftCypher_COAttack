#ifndef _ARCHIVO_H_
#define _ARCHIVO_H_

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

class Archivo{
	private:
		char* nombreArchivo;		
		ifstream archivoIN;
		ofstream archivoOUT;

	public:	
		Archivo(char*);
		Archivo(void);
		bool abrirArchivo(char* nombreA);
		bool crearArchivo(char*);
		void escribirEnArchivo(char*);
		void escribirEnArchivo(const char*);
		void escribirEnArchivo(int);
		void escribirEnArchivo(void);
		void cerrarArchivoIN(void);
		void cerrarArchivoOUT(void);
		char* leerArchivo(void);
};

#endif
