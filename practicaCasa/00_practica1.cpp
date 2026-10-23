/*
1. Muestra el array de 10 notas
2. Calcula y muestra la media (como un float)
3. Cuenta cuantas notas son aprobadas
4. Ordena el array de mayor a menor con burbuja optimizada (con la variable desordenado) y muestra el resultado
*/

#include <iostream>
using namespace std;

void mostrar(int numeros[], int n) {
	for (int i = 0; i < n; i++)
		cout << numeros[i] << " ";
	cout << endl;
}

float media(int numeros[], int n) {
	int totalSuma = 0;
	
	for (int i = 0; i < n; i++)
		totalSuma += numeros[i];

	float totalMedia = (float)totalSuma / (float)n;
	return totalMedia;
}

int contarAprobados(int numeros[], int n) {
	int contador = 0;

	for (int i = 0; i < n; i++) {
		if (numeros[i] >= 5)
			contador++;
	}
	return contador;
}

void intercambiar(int pos1, int pos2, int nums[]) {
	int valTemp;
	valTemp = nums[pos2];
	nums[pos2] = nums[pos1];
	nums[pos1] = valTemp;
}

void ordenarDescendente(int numeros[], int n) {
	bool desordenado = true;

	for (int pasada = 0; pasada < n - 1 && desordenado; pasada++) {
		desordenado = false;
		for (int i = 0; i < n - 1 - pasada; i++) {
			if (numeros[i] < numeros[i + 1]) {
				intercambiar(i, i + 1, numeros);
				desordenado = true;
			}
		}
	}
}

int main() {
	int notas[10] = {6, 3, 9, 5, 10, 2, 7, 4, 8, 5};

	cout << "1. Muestra el array de 10 notas" << endl;
	mostrar(notas, 10);
	cout << endl;

	cout << "2. Calcula y muestra la media (como un float)" << endl;
	float mediaMostrar = media(notas, 10);
	cout << "La media de las notas es: " << mediaMostrar << endl;
	cout << endl;

	cout << "3. Cuenta cuantas notas son aprobadas" << endl;
	int cant = contarAprobados(notas, 10);
	cout << "La cantidad de aprobados es: " << cant << endl;
	cout << endl;

	cout << "4. Ordena el array de mayor a menor con burbuja optimizada (con la variable desordenado) y muestra el resultado" << endl;
	cout << "El array antes de ordenar es: ";
	mostrar(notas, 10);
	ordenarDescendente(notas, 10);
	cout << "El array despues de ordenar es: ";
	mostrar(notas, 10);

	return 0;
}