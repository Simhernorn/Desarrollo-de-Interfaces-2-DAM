#include <iostream>

using namespace std;

class Cuenta {
public:
	string numCuenta;
	string titular;
	float saldo;
	
	Cuenta(string num, string tit, float sal = 0);

	Cuenta ();

	void ingresar(float cantidad);
	
	bool retirar(float cantidad);

	void operator<<(Cuenta &otro);
};