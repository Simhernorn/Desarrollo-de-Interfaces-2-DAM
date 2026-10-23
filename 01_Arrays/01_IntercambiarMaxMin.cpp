#include <iostream>
#include <stdio.h>

using namespace std;

void mostrar(int numeros[]) {
	for (int i = 0; i < 10; i++) {
		cout << numeros[i] << " ";
	}
}



void intercambiar(int pos1, int pos2, int nums[]) {

	int valTemp;

	valTemp = nums[pos2];
	nums[pos2] = nums[pos1];
	nums[pos1] = valTemp;

}



int main(int argc, char* argv[]) {

	int notas[10] = {2,7,5,6,8,5,4,4,6,7};

	mostrar(notas);

	int notaMax = notas[0];
	int maxInd = 0;
	int notaMin = notas[0];
	int minInd = 0;
	int valTemp;

	for (int i = 0; i < 10; i++) {
		
		if (notas[i] > notaMax) {
			notaMax = notas[i];
			maxInd = i;
		}

		if (notas[i] < notaMin) {
			notaMin = notas[i];
			minInd = i;
		}
	}

	cout << endl;

	intercambiar(maxInd, minInd, notas);

	mostrar(notas);

}