#include "Archivo.h"

Archivo::Archivo(void){

}


Archivo::Archivo(char* nomArchivo){
	nombreArchivo=nomArchivo;
}


bool Archivo::abrirArchivo(char* nombreA){
	cout<<">>Abriendo: " <<nombreA<<endl;
	archivoIN.open(nombreA);
	if(archivoIN.is_open()){
		return true;
	}else{
		return false;
	}
}


bool Archivo::crearArchivo(char *nombreA){
	archivoOUT.open(nombreA);
	if(archivoOUT.is_open()){
		return true;
	}else{
		return false;
	}
}


char* Archivo::leerArchivo(void){
	archivoIN.seekg (0, archivoIN.end);
    int length = archivoIN.tellg();
    archivoIN.seekg (0, archivoIN.beg);
    char * buffer = new char [length];
    std::cout << "Leyendo " << length << " caracteres...";
    archivoIN.read (buffer,length);
    return buffer;
}


void Archivo::escribirEnArchivo(char* texto){
	archivoOUT << texto;
}

void Archivo::escribirEnArchivo(const char* texto){
	archivoOUT << texto;
}

void Archivo::escribirEnArchivo(int numero){
	archivoOUT << numero;
}

void Archivo::escribirEnArchivo(void){
	archivoOUT << endl;

}

void Archivo::cerrarArchivoIN(void){
	archivoIN.close();
}

void Archivo::cerrarArchivoOUT(void){
	archivoOUT.close();
}


/*
int main(int argc, char *argv[]){
	char *nombreArchivoIN;
	char* nombreArchivoOUT;
	Archivo archivoIN;
	Archivo archivoOUT;

	if(argc>=2){

	if(archivoIN.abrirArchivo(argv[1])){
		cout<<">>Archivo abierto..."<<endl;
	}else{
		cout<<">>Error al intentar abrir el archivo..."<<endl;
	}

	}else{
		cout<<">>Argumentos insuficientes."<<endl<<"Ejecute con: "<<argv[0]<<" nombreArchivo1  nombreArchivo2"<<endl;
		exit(0);
	}

}*/
