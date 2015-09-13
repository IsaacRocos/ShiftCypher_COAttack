#include "Archivo.h"
#include "ShiftCypher.h"

int main(int argc, char *argv[]){

	Archivo archivoIN;
	Archivo archivoOUT;
	ShiftCypher encriptador;
	char* resultante;
	
	cout<<endl<<endl<<"============"<<endl;
	cout<<"Shift Cypher"<<endl;
	cout<<"============"<<endl<<endl;

	if(argc==5){
		if(archivoIN.abrirArchivo(argv[1])){
			cout<<">>Archivo abierto..."<<endl;

			if(atoi(argv[4])==1){
				cout<<">>Desencriptando con llave: " << atoi(argv[3])<<endl;
				resultante = encriptador.desEncriptarCadena(archivoIN.leerArchivo(), atoi(argv[3]));
			}else{
				cout<<">>Encriptando con llave: " << atoi(argv[3])<<endl;
				resultante = encriptador.encriptarCadena(archivoIN.leerArchivo(), atoi(argv[3]));
			}
			
			archivoOUT.crearArchivo(argv[2]);
			archivoOUT.escribirEnArchivo(resultante);
			archivoOUT.cerrarArchivoOUT();

		}else{
			cout<<">>Error al intentar abrir el archivo..."<<endl;
		}
	}else{
		cout<<endl<<">>Argumentos insuficientes.Se requieren 4."<<endl<<"Ejecute con: "<<argv[0]<<" [NombreArchivoEntrada] [NombrerAchivoSalida] [Llave] [0 para cifrar, 1 para descifrar]"<<endl<<endl;
		exit(0);
	}
}