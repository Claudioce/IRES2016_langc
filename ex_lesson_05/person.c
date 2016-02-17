#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include <string.h>
#include "person.h"
 
main(){
	Persone  m;
	Persone_setnome(&m, "Marione"); // m.setnome("Mario"); in OO
	Persone_setcognome(&m, "Rossignol");
	m.eta = -1;
	char bigliettoDaVisita[100];
	Persone_prendiBigliettoDaVisita(&m, bigliettoDaVisita);
	printf("Ciao %s\n", bigliettoDaVisita);
	EXIT_SUCCESS;
}
