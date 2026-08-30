#include <iostream>
#include <memory>

std::unique_ptr<int> triplicar(int valor);

using namespace std;

int main()
{
	unique_ptr<int> edad(new int);
	*edad = 21;
	cout << "Edad: " << *edad << endl;

	unique_ptr<int> resultado = triplicar(5);
	cout << "Resultado triplicar: " << *resultado << endl;

	return 0;
}

unique_ptr<int> triplicar(int valor)
{
	unique_ptr<int> resultado(new int);
	*resultado = valor * 3;
	return resultado;
}