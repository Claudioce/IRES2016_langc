#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include "somma.h"

int moltiplica(int primo, int secondo)
{
	int result = 0;
	for (int i = 0; i < primo; ++i)
	{	
		result += secondo;
	}
	return result;
}