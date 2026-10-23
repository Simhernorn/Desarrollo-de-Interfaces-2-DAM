#include <iostream>
#include <stdio.h>

using namespace std;

int main(int arg, char* argv[]) {

	cout << "Bienvenido!" << endl;

	int actual;
	int nacimiento;
	int edad;

	cout << "Introduce el año actual" << endl;	
	cin >> actual;
	cout << "Introduce el año en el que naciste" << endl;
	cin >> nacimiento;

	edad = actual - nacimiento;

	cout << "Tienes " << edad << " años" << endl;
	
	if (edad >= 18)
		cout << "Eres mayor de edad" << endl;
	else
		cout << "Eres menor de edad" << endl;
}