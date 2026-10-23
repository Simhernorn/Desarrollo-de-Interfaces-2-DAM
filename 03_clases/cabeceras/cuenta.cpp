#include <iostream>

#include "cuenta.h"

using namespace std;
	
Cuenta::Cuenta(string num, string tit, float sal):
	titular(tit),
	numCuenta(num),
	saldo(sal)
{}

Cuenta::Cuenta () {}

void Cuenta::ingresar(float cantidad){
	saldo += cantidad;
}
	
bool Cuenta::retirar(float cantidad){
	if(cantidad > saldo) return false;
	saldo -= cantidad;
	return true;
}

void Cuenta::operator<<(Cuenta &otro) {
	saldo = saldo + otro.saldo;
	otro.saldo = 0;
}