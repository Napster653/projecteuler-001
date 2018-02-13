#include <stdio.h>

int main(void)
{
	int n = 999;
	int result = 0;

	int p = 0;

	//Sumar múltiplos de 3 hasta n
	p = n / 3;
	result += p * (p + 1) / 2 * 3;

	//Sumar múltiplos de 5 hasta n
	p = n / 5;
	result += p * (p + 1) / 2 * 5;

	//Restar múltiplos de 15 hasta n
	p = n / 15;
	result -= p * (p + 1) / 2 * 15;

	//Imprimir resultado
	printf("Result: %d\n", result);
}
