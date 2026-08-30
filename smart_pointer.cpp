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

	// El array dinamico de la Parte 5 (arr = new int[tamano]) tambien seria buen candidato para unique_ptr<int[]> porque su delete [] se haria automaticamente al salir de scope, evitando el riesgo de olvidar liberarlo y provocar un memory leak.

	return 0;
}

unique_ptr<int> triplicar(int valor)
{
	unique_ptr<int> resultado(new int);
	*resultado = valor * 3;
	return resultado;
}