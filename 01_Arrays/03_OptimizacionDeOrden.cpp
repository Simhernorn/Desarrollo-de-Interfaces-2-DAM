#include <iostream>
#include <stdio.h>

using namespace std;

void mostrar(int numeros[]) {
	for (int i = 0; i < 10; i++) {
		cout << numeros[i] << " ";
	}
	
	cout << endl;
}



void intercambiar(int pos1, int pos2, int nums[]) {

	int valTemp;

	valTemp = nums[pos2];
	nums[pos2] = nums[pos1];
	nums[pos1] = valTemp;

}



int main(int argc, char* argv[]) {

	int notas[10] = {6,7,5,6,8,5,4,1,6,7};

	mostrar(notas);

	int notaMenor = notas[0];
	int minInd = 0;
	int notaMayor = notas[0];
	int maxInd = 0;

	int i;
	int n;

	bool desordenado = true;
	
	for (n = 0; n < 10 && desordenado; n++) {
		desordenado = false;
		for (i = 0; i < 9; i++) {
			if (notas[i] > notas[i + 1]) {
				minInd = i;
				maxInd = i + 1;
				intercambiar(maxInd, minInd, notas);
				mostrar(notas);
				desordenado = true;
			}
		}

		cout << n << endl;
	}
}