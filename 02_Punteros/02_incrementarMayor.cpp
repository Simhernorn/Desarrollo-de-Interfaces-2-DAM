#include <iostream>
#include <stdio.h>

using namespace std;

void incrementarMayor(int *num1, int *num2) {
	int valor1 = *num1;
	int valor2 = *num2;

	if (valor1 > valor2)
		(*num1)++;
	else
		(*num2)++;
}

int *dameMayor(int *val1, int *val2) {
	if (*val1 > *val2)
		return val1;
	else
		return val2;
}

void dameMayorFotut(int *var1, int *var2, int **puntero) {
	if (*var1 > *var2)
		*puntero = var1;
	else
		*puntero = var2;
}

int main(int argc, char* argv[]) {
	int i;
	i = 8;
	int j;
	j = 10;

	cout << "i = " << i << " - j= " << j << endl;
	incrementarMayor(&i, &j);
	cout << "i = " << i << " - j= " << j << endl;
	cout << "====================================" << endl;

	cout << "i = " << i << " - j= " << j << endl;
	int *mayor;
	mayor = dameMayor(&i, &j);
	(*mayor)++;
	cout << "i = " << i << " - j= " << j << endl;
	cout << "====================================" << endl;

	cout << "i = " << i << " - j= " << j << endl;
	int *mayor2;
	dameMayorFotut(&i, &j, &mayor2);
	(*mayor2)++;
	cout << "i = " << i << " - j= " << j << endl;
}