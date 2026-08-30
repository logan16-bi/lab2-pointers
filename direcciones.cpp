#include <iostream>

using namespace std;

int main()
{
	int num = 25;
	cout << "Direccion de num: " << &num << endl;

	int *ptr = nullptr;
	ptr = &num;
	cout << "ptr apunta a: " << ptr << endl;
	cout << "Valor apuntado (*ptr): " << *ptr << endl;

	*ptr = 100;
	cout << "num despues de *ptr = 100: " << num << endl;

	double precio = 19.99;
	double *pptr = &precio;
	cout << "\nDireccion de precio: " << &precio << endl;
	cout << "pptr apunta a: " << pptr << endl;
	cout << "Valor apuntado (*pptr): " << *pptr << endl;

	int *sinInit;

	return 0;
}