#include <iostream>

void swap(int *x, int *y);
void duplicar(int *valor);
void ordenarPar(int *a, int *b);

using namespace std;

int main()
{
	int num1 = 2, num2 = -3;
	cout << "Antes: num1=" << num1 << " num2=" << num2 << endl;
	swap(&num1, &num2);
	cout << "Despues: num1=" << num1 << " num2=" << num2 << endl;

	int valor = 5;
	cout << "\nvalor antes de duplicar: " << valor << endl;
	duplicar(&valor);
	cout << "valor despues de duplicar: " << valor << endl;

	int a = 9, b = 4;
	cout << "\na=" << a << " b=" << b << " antes de ordenarPar" << endl;
	ordenarPar(&a, &b);
	cout << "a=" << a << " b=" << b << " despues de ordenarPar" << endl;

	return 0;
}

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void duplicar(int *valor)
{
	*valor = *valor * 2;
}

void ordenarPar(int *a, int *b)
{
	if (*a > *b) swap(a, b);
}