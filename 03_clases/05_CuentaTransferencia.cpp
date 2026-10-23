#include <iostream>

using namespace std;

class Cuenta {
public:
	string numCuenta;
	string titular;
	float saldo;
	
	void ingresar(float cantidad){
		saldo += cantidad;
	}
	
	bool sacar(float cantidad){
		if(cantidad > saldo) return false;
		saldo -= cantidad;
		return true;
	}

	void operator<<(Cuenta &otro) {
		saldo = saldo + otro.saldo;
		otro.saldo = 0;
	}
};

void mostrar(Cuenta c) {
	cout << "Cuenta " << c.numCuenta << "\n\tTitular:" << c.titular << "\n\tSaldo:" << c.saldo <<endl;
}

void procesarIngreso(Cuenta *cp){
	float cantidad;
	cout << "Introduce la cantidad a ingresar: ";
	cin >> cantidad;
	// El punto se ejecuta antes que el *, para que funcione hay que ponerlo entre parentesis
	(*cp).ingresar(cantidad);
	//cp -> ingresar(cantidad);
	
}

void procesarRetirada(Cuenta & cp){
	float cantidad;
	cout << "Introduce la cantidad a sacar: ";
	cin >> cantidad;
	
	bool respuesta = cp.sacar(cantidad);
	if(!respuesta) cout<<"No tienes pasta, pringao"<<endl;
	else cout<<"Eres mas pobre"<<endl;
}

int main(int argc, char* argv[]){
	Cuenta cNacho;
	cNacho.titular = "Nacho";
	cNacho.saldo = 500;
	
	Cuenta cPepe;
	cPepe.titular = "Pepe";
	cPepe.saldo = 1000;
	
	mostrar(cNacho);
	mostrar(cPepe);
	
	cPepe << cNacho;

	cout << "TRANSFERIDO" << endl;
	mostrar(cNacho);
	mostrar(cPepe);
}