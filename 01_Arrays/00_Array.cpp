#include <iostream>
#include <stdio.h>

using namespace std;

void mostrar(int numeros[]) {
	for (int i = 0; i < 10; i++) {
		cout << numeros[i] << " ";
	}
}

int main(int argc, char* argv[]) {

	int notas[10] = {2,7,5,6,8,5,4,4,6,7};

	mostrar(notas);
}