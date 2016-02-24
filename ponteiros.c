#include <stdio.h>
void troca(int *p, int *q);
/*
Exemplo para usar ponteiros ao passar valores para uma funcao
*/
int main(void) {
	int a = 1;
	int b = 2;
	printf("Inverter valores das variaveis a = 1 e b = 2");
	troca(&a, &b);
	return 0;
}

void troca(int *p, int *q) {
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
	printf("Valor a = %d e valor de b = %d", *p, *q);
}
