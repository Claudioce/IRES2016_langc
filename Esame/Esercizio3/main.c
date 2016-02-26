
#include <stdio.h>
#include <stdlib.h>
#include "moltiplicazione.h"
#include "moltiplicazione.h"


int main()
{
	int risultato;
	risultato = moltiplica(3,5);
	printf("Prodotto di 3 x 5 = %d\n",risultato);
	risultato = moltiplica(0,15) ;
	printf("Prodotto di 0 x 15 = %d\n", risultato);
	return EXIT_SUCCESS;
}
