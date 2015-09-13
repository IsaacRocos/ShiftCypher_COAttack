#include "ShiftCypher.h"

using namespace std;

char* ShiftCypher::encriptarCadena(char* cadena, char llave){
	char* cadCifrada;
	char caracterANumAlf;
	int tamCadena= strlen(cadena);
	cadCifrada = new char[tamCadena];
	int indiceCadCifrada=0;
	cout<<endl<<"\t>>Entrada: ";
	for(int indice=0; indice<tamCadena; indice++){
		//IGNORAR ESPACIO, SALTO DE LINEA Y CARACTERES ESPECIALES:
		if(cadena[indice]!=32 && cadena[indice]!='\n' && (cadena[indice]>64 && cadena[indice]<91) || (cadena[indice]>96 && cadena[indice]<123)){ 
			cout<<cadena[indice];
			//PARA CODIFICAR SÓLO EN MAYUSCULAS:
			caracterANumAlf = (65<=cadena[indice] && cadena[indice]<=90)?(cadena[indice]-65):(cadena[indice]-97);
			cadCifrada[indiceCadCifrada] = ((caracterANumAlf+llave) % 26)+65;	
			indiceCadCifrada++;
		}
	}
	cout<<endl<<endl<<"\t>>Salida:  "<<cadCifrada<<endl<<endl;
	return cadCifrada;
}


char* ShiftCypher::desEncriptarCadena(char* textoCifrado, char llave){
	int tamTextoCifrado = strlen(textoCifrado);
	char* descifrado;
	descifrado = new char[strlen(textoCifrado)];
	char caracterANumAlf;
	
	//cout<<endl<<"\t>>Entrada: ";
	for(int indice=0;indice<tamTextoCifrado;indice++){
	//	cout<<textoCifrado[indice];
		caracterANumAlf = textoCifrado[indice]-65;
		descifrado[indice] = mapear(caracterANumAlf,llave) + 65;
	}
	//cout<<endl<<endl<<"\t>>Salida:  "<<descifrado<<endl<<endl;
	return descifrado;
}


char ShiftCypher::mapear(char caracter,int llave){
	char resultante;
	char a = caracter-llave;
	char m = 26;
	if(a>=0){
		resultante = a%m;
	}else{
		a +=26;
		resultante = a%m;
	}
	return resultante;
}

