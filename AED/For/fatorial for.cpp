#include <stdio.h>

int main ()
{
	int fatorial = 5;
	int resposta = 1;
	
	for ( ; fatorial >= 1; --fatorial) {	// --fatorial = fatorial - 1
		resposta *= fatorial;				//resposta = resposta * fatorial
	}

printf ("O numero fatorial e %i", resposta);

	return 0;
}
