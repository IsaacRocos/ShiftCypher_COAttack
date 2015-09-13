all: mCOAttack mShiftCypher

mCOAttack: mainCOAttack.cpp Archivo.o ShiftCypher.o COAttack.o
	g++ -o COAttack    mainCOAttack.cpp Archivo.o ShiftCypher.o COAttack.o

mShiftCypher: mainShiftCypher.cpp Archivo.o ShiftCypher.o
	g++ -o ShiftCypher mainShiftCypher.cpp Archivo.o ShiftCypher.o	


COAttack.o: COAttack.cpp COAttack.h 
	g++ COAttack.cpp  -c

ShiftCypher.o:
	g++ ShiftCypher.cpp -c

Archivo.o:
	g++ Archivo.cpp -c

