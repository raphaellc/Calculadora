#ifndef CALCULADORA_H
#define CALCULADORA_H

class Calculadora
{
public:
	Calculadora();
	~Calculadora();
	float somar(float opA, float opB);
	float subtrair(float opA, float opB);
	float multiplicar(float opA, float opB);
	float dividir(float opA, float opB); // A/B - B nao pode ser zero.
};

#endif
