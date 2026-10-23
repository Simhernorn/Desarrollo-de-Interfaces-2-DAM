#include <iostream>
#include <stdio.h>

using namespace std;

void hazNegativo(int &num) {
	if (num > 0)
		num = -num;
}

int *maximo(int *val1, int *val2) {
	if (*val1 > *val2)
		return val1;
	else
		return val2;
}

int &maximoPRDP(int &num1, int &num2) {
	if (num1 > num2)
		return num1;
	else
		return num2;
}

int main(int argc, char* argv[]) {
	int i = 8;
	/*
	int &idos = i;

	cout << "i vale " << i << endl;
	cout << "idos vale " << idos << endl;

	cout << "===================== i = 9 ======================" << endl;

	idos = 9;
	cout << "i vale " << i << endl;
	cout << "idos vale " << idos << endl;

	cout << "===================== hazNegativo() ======================" << endl;
	*/
	int j = 9;
	/*
	cout << "j vale " << j << endl;
	hazNegativo(j);
	cout << "j vale ahora " << j << endl;
	*/
	cout << "===================== maximo ======================" << endl;
	int *pMax = maximo(&i, &j);
	cout << "El mayor vale " << *pMax << endl;

	cout << "===================== minimo ======================" << endl;
	// int *pMax2 = maximoPRDP(i, j);
	// cout << "El mayor vale " << *pMax2 << endl;

	int & max3 = maximoPRDP(i, j);
	cout << "El max3 da " << max3 << endl;
}