#include <iostream>
#include "Calculadora.h"
int main()
{
	Calculadora * calc = new Calculadora;
	std::cout << "A Soma dos valores 3 + 5 � igual: " << calc->somar(3.0f, 5.0f) << std::endl;
	std::cout << "A Divisao dos valores 3 / 5 � igual: " << calc->dividir(3.0f, 0.0f) << std::endl;

	system("pause");
	return 1;
}