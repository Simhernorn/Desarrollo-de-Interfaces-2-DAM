#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Complejo {
public:
	float real;
	float imag;

	Complejo operator+(Complejo otro) {
		Complejo resultado;
		resultado.real = real + otro.real;
		resultado.imag = imag + otro.imag;
		return resultado;
	}
};

Complejo operator+(Complejo c1, float c2) {
	float parteReal = c1.real + c2;
	float parteImag = c1.imag;
	Complejo resultado;
	resultado.real = parteReal;
	resultado.imag = parteImag;
	return resultado;
}

Complejo operator+(float c1, Complejo c2) {
	float parteReal = c1 + c2.real;
	float parteImag = c2.imag;
	Complejo resultado;
	resultado.real = parteReal;
	resultado.imag = parteImag;
	return resultado;
}

int main(int argc, char *argv[]) {
	Complejo j;
	j.real = 3;
	j.imag = -2;
	cout << "j = " << j.real << " + " << j.imag << "i" << endl;



	Complejo i;
	i.real = 9;
	i.imag = 22;
	cout << "i = " << i.real << " + " << i.imag << "i" << endl;



	Complejo s;
	s = i + j;
	cout << "s = " << s.real << " + " << s.imag << "i" << endl;

	Complejo s2;
	Complejo s3;
	s2 = 3 + j;
	s3 = j + 9;

	cout << "s2 = " << s2.real << " + " << s2.imag << "i" << endl;
	cout << "s3 = " << s3.real << " + " << s3.imag << "i" << endl;

	
}