#include "COAttack.h"

void COAttack::ataqueFuerzaBruta(char* textoCifrado,Archivo* archivoOUT){
	char* cadenaResultante;
	string cabecera = "K = ";
	for(int llave=1;llave<=25;llave++){
		cadenaResultante = desEncriptarCadena(textoCifrado,llave);
		archivoOUT->escribirEnArchivo(cabecera.c_str());
		archivoOUT->escribirEnArchivo(llave);
		archivoOUT->escribirEnArchivo();
		archivoOUT->escribirEnArchivo(cadenaResultante);
		archivoOUT->escribirEnArchivo();
	}
}


void COAttack::desencriptarCadena(char* textoCifrado){
	char* descifrado;
	char caracterANumAlf;
	int tamTextoCifrado= strlen(textoCifrado);
	descifrado = new char[strlen(textoCifrado)];
	for(int llave=0;llave<=25;llave++){
		for(int indice=0;indice<tamTextoCifrado;indice++){
			caracterANumAlf = textoCifrado[indice]-65;
			descifrado[indice] = mapear(caracterANumAlf,llave) + 65;
		}
		cout<<endl<<"Llave: "<<llave<<" "<<descifrado<<endl;
	}
}


