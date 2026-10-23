/*
Retos sobre la clase:
1. bool vender(int cantidad): devuelve false si no hay stock suficiente, si lo hay, lo descuenta
2. void reponer(int cantidad): suma al stock

Retos sobre los métodos externos:
1. inicializarProductos(Producto *datos): rellena los 5 productos (códigos "A1" a "A5")
2. Producto *buscarProducto(Producto *productos, string codigo): devuelve un puntero al producto o nullptr
3. void procesarVenta(Producto &p): pide la cantidad por teclado, llama a vender y muestra si salio bien
4. En el main: muestra el inventario, pide un codigo, busca el producto, procesa la venta si existe (o avisa si no) y muestra el inventario otra vez
*/

#include <iostream>
#include <string>
using namespace std;

class Producto {
public:
	string codigo;
	string nombre;
	float precio;
	int stock;

	bool vender(int cantidad) {
		// TODO
		return false;
	}

	void reponer(int cantidad) {
		// TODO
	}
};

void mostrar(Producto p) {
	cout << p.codigo << " - " << p.nombre << " - " << p.precio << " euros - stock: " << p.stock << endl;
}

void inicializarProductos(Producto *datos) {
	// TODO: rellenar los 5 productos
}

Producto *buscarProducto(Producto *productos, string codigo) {
	// TODO: ¡cuidado con el bucle! Usa llaves {} o comprueba el cuerpo del for
	return nullptr;
}

void procesarVenta(Producto &p) {
	// TODO: pedir cantidad con cin, llamar a p.vender(...) y mostrar mensaje
}

int main() {
	Producto productos[5];
	inicializarProductos(productos);

	// TODO: mostrar los 5 productos
	// TODO: pedir código, buscar, vender o avisar si no existe
	// TODO: mostrar los 5 productos otra vez

	return 0;
}