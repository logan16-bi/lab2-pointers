#include <iostream>

int* triplicar(int valor);

using namespace std;

int main()
{
	int *ptr = triplicar(5);
	cout << "Resultado: " << *ptr << endl;
	delete ptr;
	ptr = nullptr;

	return 0;
}

int* triplicar(int valor)
{
	int *resultado = new int;
	*resultado = valor * 3;
	return resultado;
}