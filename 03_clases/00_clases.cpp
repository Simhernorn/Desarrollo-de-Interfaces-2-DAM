#include <iostream>
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
		cout << "Saldo insuficiente, pringao" << endl;
	else
		cout << "Dinero retirado, ahora eres mas pobre" << endl;
}

int main(int argc, char* argv[]) {
	
	Cuenta c1;
	c1.titular = "Nacho";
	c1.numCuenta = "";
	c1.saldo = 0;

	Cuenta c2;
	c2 = c1;

	c2.saldo = 1000;

	cout << "saldo de c1 " << c1.saldo << endl;
	cout << "saldo de c2 " << c2.saldo << endl;
	c1.ingresar(222);
	cout << "saldo c2 " << c2.saldo << endl;

	mostrar(c1);

	procesarIngreso(&c1);

	mostrar(c1);

	procesarRetirada(c1);

	mostrar(c1);
}