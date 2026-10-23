#include <iostream>
#include <stdio.h>

using namespace std;

bool esPositivo(int num) {
	if (num >= 0) return true;
	return false;
}

void hazNegativo(int num) {
	if (num >= 0) num = -num;
}

void hazNegativoP(int *punt) {
	int valor = *punt;
	if (*punt > 0) *punt = -valor;
}

int main(int argc, char* argv[]) {
	
	int i;
	i = 8;

	if (esPositivo(i))
		cout << "i SI es positivo" << endl;
	else
		cout << "i es negativo" << endl;

	cout << "i vale " << i << endl;
	hazNegativo(i);
	cout << "i vale " << i << endl;

	int *point;
	point = &i;
	hazNegativoP(point);
	
	cout << "i vale " << i << endl;

	return 0;


}