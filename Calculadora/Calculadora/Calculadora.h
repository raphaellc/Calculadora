#ifndef CALCULADORA_H
#define CALCULADORA_H

class Calculadora
{
public:
	Calculadora();
	~Calculadora();
	float somar(float opA, float opB);
	float dividir(float opA, float opB); // A/B - B n�o pode ser zero.
};

#endif
