#include "Archivo.h"
#include "COAttack.h"

int main(int argc, char *argv[]){
	COAttack adversario;
	Archivo archivoIN;
	Archivo archivoOUT;
	cout<<endl<<endl<<"======================"<<endl;
	cout<<"Cyphertext Only Attack"<<endl;
	cout<<"======================"<<endl<<endl;
	if(argc==3){
		if(archivoIN.abrirArchivo(argv[1])){
			cout<<">>Archivo abierto..."<<endl;
			cout<<">>Procesando... " <<endl;
			archivoOUT.crearArchivo(argv[2]);
			adversario.ataqueFuerzaBruta(archivoIN.leerArchivo(),&archivoOUT);
			archivoOUT.cerrarArchivoOUT();
			cout<<endl<<"Proceso finalizado. Resultado almacenado en: "<<argv[2]<<endl<<endl;
		}else{
			cout<<">>Error al intentar abrir el archivo..."<<endl;
		}
	}else{
		cout<<endl<<">>Argumentos insuficientes. Recibidos: "<<argc<<". Se requieren 2."<<endl<<"Ejecute con: "<<argv[0]<<" [NombreArchivoEntrada] [NombrerAchivoSalida]"<<endl<<endl;
		exit(0);
	}

}