/*
1. void dividir(int a, int b, int &cociente, int &resto): devuelve cociente y resto mediante referencias
2. int *buscar(int arr[], int n, int valor): devuelve un puntero al primer elemento igual a valor, o nullptr si no esta
3. void duplicar(int *p): duplica el valor al que apunta p. En el main, usala con el puntero que devuelve buscar, comprobando antes que no es nullptr
4. void minMax(int arr[], int n, int **pMin, int **pMax): deja en *pMin y *pMax punteros al menor y al mayor elemento (dameMayorFotut)
*/

#include <iostream>
using namespace std;

void dividir(int a, int b, int &cociente, int &resto) {
	cociente = a / b;
	resto = a % b;
}

int *buscar(int arr[], int n, int valor) {
	// TODO: devolver la dirección del elemento (&arr[i]) o nullptr
	int *devolver = 0;
	int i = 0;
	for (i = 0; i < n; i++)
		if (arr[i] == valor)
			cout << "Encontrado el valor " << valor << " en el indice " << i << endl;
			devolver = &i;
			return &devolver;
	cout << "No se ha encontrado el valor proporcionado" << endl;
	return nullptr;
}

void duplicar(int *p) {
	int *duplicado = &p;
}

void minMax(int arr[], int n, int **pMin, int **pMax) {
	for (int i = 0; i < n; i++)
		if (*pMin > arr[i])
			*pMin = arr[i];

		if (*pMax < arr[i])
			*pMax = arr[i];

	cout << "El maximo es " << *pMax << endl;
	cout << "El minimo es " << *pMin << endl;

	int incrementado = *pMax + 1;
	cout << "El maximo incrementado es " << incrementado << endl;
}

int main() {
	int c, r;
	dividir(17, 5, c, r);
	cout << "17 / 5 = " << c << " resto " << r << endl;

	int datos[6] = {4, 9, 2, 7, 9, 1};

	int *encontrado = buscar(datos, 6, 7);
	if (&encontrado != nullptr)
		duplicar(&encontrado);
		for (int i = 0; i < 6; i++)
			cout << datos[i] << " ";
		cout << endl;

	int *pMin, *pMax;
	minMax(datos, 6, &pMin, &pMax);
	// TODO: mostrar *pMin y *pMax
	// TODO: incrementa el mayor a través de pMax y comprueba que cambió en el array

	return 0;
}