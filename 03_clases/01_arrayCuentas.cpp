#include <iostream>
#include <sstream>
#include <stdio.h>

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

void procesarIngreso(Cuenta *cp) {
	float cantidad;
	cout << "Introduce la cantidad a ingresar: ";
	cin >> cantidad;

	(*cp).ingresar(cantidad);
}

void procesarRetirada(Cuenta &cp) {
	float cantidad;
	cout << "Introduce la cantidad a retirar: ";
	cin >> cantidad;

	bool respuesta = cp.retirar(cantidad);
	if (!respuesta)
		cout << "Onde vas? Que no tienes tanto dinero, pringao" << endl;
	else
		cout << "Dinero retirao, ahora eres mas pobre" << endl;
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
		datos[i].saldo = 100*i;
		i++;
	}
}

void realizarIngreso(Cuenta *cuentas) {
	string cuentaIntroducida;
	cout << "Introduzca el numero de cuenta" << endl;
	cin >> cuentaIntroducida;

	int i = 0;
	for (i = 0; (i < 5) && (cuentaIntroducida != cuentas[i].numCuenta); i++)

	if(i == 5)
		return;
	procesarIngreso(&(cuentas[i]));
}

int main(int argc, char* argv[]) {
	Cuenta cuentas[5];
	inicializarCuentas(cuentas);

	for (int i = 0; i < 5; i++)
		mostrar(cuentas[i]);

	realizarIngreso(cuentas); // pregunta numero de cuenta y cantidad, para luego hacer el ingreso

	for (int i = 0; i < 5; i++)
		mostrar(cuentas[i]);
}