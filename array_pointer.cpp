#include <iostream>

using namespace std;

int main()
{
	int vals[] = {4, 7, 11, 18, 25};
	cout << "Nombre del array (direccion): " << vals << endl;
	cout << "Primer elemento (*vals): " << *vals << endl;

	int *valptr = vals;
	cout << "\n--- Recorriendo con [] ---" << endl;
	for (int h = 0; h < 5; h++) cout << valptr[h] << " ";
	cout << endl;

	cout << "\n--- Recorriendo con aritmetica de punteros ---" << endl;
	for (int h = 0; h < 5; h++) cout << *(valptr + h) << " ";
	cout << endl;

	cout << "\n--- Usando ++ para avanzar el pointer ---" << endl;
	int *p = vals;
	for (int h = 0; h < 5; h++) { cout << *p << " "; p++; }
	cout << endl;

	cout << "\nUltimo elemento: " << *(valptr + 4) << endl;

	int *inicio = vals;
	int *fin = vals + 4;
	cout << "fin - inicio: " << fin - inicio << endl;

	return 0;
}