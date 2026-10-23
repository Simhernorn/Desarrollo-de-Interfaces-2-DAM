#include <iostream>

#include "cuenta.h"

using namespace std;

void mostrar(Cuenta c) {
	cout << "Cuenta " << c.numCuenta << "\n\tTitular:" << c.titular << "\n\tSaldo:" << c.saldo <<endl;
}

int main(int argc, char* argv[]){
	Cuenta cNacho("100", "Nacho", 500);
	
	Cuenta cPepe("101", "Pepe", 1000);
	
	mostrar(cNacho);
	mostrar(cPepe);
	
	cPepe << cNacho;

	cout << "TRANSFERIDO" << endl;
	mostrar(cNacho);
	mostrar(cPepe);

	Cuenta cMaria("102", "Maria");
	mostrar(cMaria);
}