#include <iostream>

using namespace std;

int main()
{
	int *num = new int;
	*num = 42;
	cout << "Valor dinamico: " << *num << endl;
	delete num;
	num = nullptr;

	int tamano;
	cout << "\nCuantos numeros quieres guardar? ";
	cin >> tamano;

	int *arr = new int[tamano];
	for (int h = 0; h < tamano; h++) arr[h] = (h + 1) * 10;

	cout << "Array dinamico: ";
	for (int h = 0; h < tamano; h++) cout << arr[h] << " ";
	cout << endl;

	delete [] arr;
	arr = nullptr;

	double *precios = new double[tamano];
	double *notas = new double[tamano];
	for (int h = 0; h < tamano; h++) precios[h] = (h + 1) * 1.5;
	for (int h = 0; h < tamano; h++) notas[h] = (h + 1) * 2.5;

	cout << "\nPrecios: ";
	for (int h = 0; h < tamano; h++) cout << precios[h] << " ";
	cout << endl;

	cout << "Notas: ";
	for (int h = 0; h < tamano; h++) cout << notas[h] << " ";
	cout << endl;

	delete [] precios;
	delete [] notas;
	precios = nullptr;
	notas = nullptr;

	return 0;
}