#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[]) {
	int i;
	i = 8;

	int *p;
	p = &i;

	cout << "i vale " << i << endl;
	cout << "i esta en la posicion " << p << endl;
	cout << "i esta en la posicion " << &i << endl;

	//*p = 10;

	cout << "i vale " << *p << endl;
}