#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Cuenta {
public:
	string numCuenta;
	string titular;
	float saldo;

	void ingresar(float cantidad) {
		saldo += cantidad;
	}

	bool retirar(float cantidad) {
		if(cantidad > saldo)
			return false;
		saldo -= cantidad;
		return true;
	}
};

void mostrar(Cuenta c) {
	cout << "Cuenta " << c.numCuenta << " de " << c.titular << " con saldo " << c.saldo << endl;
}

void inicializarCuentas(Cuenta *datos) {
	string nombres[5] = {"juan", "perico", "andres", "fulano", "vengano"};
	int i = 0;
	while (i < 5) {
		stringstream ss;
		ss << 100 + i;
		string numCuenta = ss.str();
		datos[i].titular = nombres[i];
		datos[i].numCuenta = numCuenta;
		datos[i].saldo = rand() % 1000;
		i++;
	}
}

void intercambiar(Cuenta *cuentas, int pos1, int pos2) {

	Cuenta valTemp;

	valTemp = cuentas[pos2];
	cuentas[pos2] = cuentas[pos1];
	cuentas[pos1] = valTemp;

}

void ordenarCuentas(Cuenta *cuentas) {
	int minInd = 0;
	int maxInd = 0;

	int i;
	int n;

	bool desordenado = true;
	
	for (n = 0; n < 5 && desordenado; n++) {
		desordenado = false;
		for (i = 0; i < 4; i++) {
			if (cuentas[i].saldo < cuentas[i + 1].saldo) {
				minInd = i;
				maxInd = i + 1;
				intercambiar(cuentas, maxInd, minInd);
				desordenado = true;
			}
		}
	}
}

int main(int argc, char* argv[]) {
	Cuenta cuentas[5];
	inicializarCuentas(cuentas);

	cout << "ANTES: " << endl;
	for (int i = 0; i < 5; i++)
		mostrar(cuentas[i]);

	ordenarCuentas(cuentas);

	cout << "DESPUES: " << endl;
	for (int i = 0; i < 5; i++)
		mostrar(cuentas[i]);
}