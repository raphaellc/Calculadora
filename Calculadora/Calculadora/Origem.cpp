#include <iostream>
#include "Calculadora.h"
int main()
{
	Calculadora * calc = new Calculadora;
	std::cout << "A Soma dos valores 3 + 5 � igual: " << calc->somar(3.0f, 5.0f) << std::endl;
	std::cout << "A Soma dos valores 3 x 5 � igual: " << calc->multiplicar(3.0f, 5.0f) << std::endl;

	system("pause");
	return 1;
}