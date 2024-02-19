#include <stdio.h>

int main (){
	
	int contador;
	float nota;
	float media;
	float total = 0;
	
	for(contador = 1; contador <= 4 ; contador++) {
		printf (" Digite a nota:");						// O for repete a nota 4 vezes pois o contador está até 4
		scanf ("%f", &nota);
		total = total + nota;
}
	
	media = total / 4;
	printf ("A media e: %f", media);
	
	return 0;
}
