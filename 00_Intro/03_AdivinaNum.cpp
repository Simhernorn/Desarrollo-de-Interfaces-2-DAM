#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[]) {

	cout << "Bienvenido!" << endl;
	cout << "Intenta adivinar el numero secreto!" << endl;

	int secreto = 8;
	int intento;
	int maxIntentos = 5;
	int intentosActuales = 5;
	bool seguir = true;

	while (seguir) {

		if (intentosActuales == 5) {
			cout << "Introduce un numero para intentar adivinar el secreto" << endl;
			cin >> intento;
		} else {
			cout << "Intentalo de nuevo" << endl;
			cin >> intento;
		}

		if (intento == secreto) {
			cout << "Felicidades! Has acertado el numero!" << endl;
			seguir = false;
		} else {

			if (intentosActuales == 0) {
				cout << "Has perdido! El numero secreto era " << secreto << endl;
				seguir = false;
				break;
			} else {
				if (intento > secreto) {
					intentosActuales--;
					cout << "Lo siento, el numero es menor. Te quedan " << intentosActuales << " intentos." << endl;
				} else {
					intentosActuales--;
					cout << "Lo siento, el numero es mayor. Te quedan " << intentosActuales << " intentos." << endl;
				}
			}
		}
	}
}