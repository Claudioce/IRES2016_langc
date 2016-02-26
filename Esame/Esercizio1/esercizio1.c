#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS

double media(int* array,int lungo)
{
	double summ=0;
	double result=0;
	for(int i=0;i<lungo;++i)
	{
		summ=array[i]+summ;//eseguo somma
	}
	printf("Somma degli elementi array = %f\n",summ);
	result=summ/lungo;//media elementi
	//printf("Media delgi elementi array = %f\n",result);  	
return result;
}
void main()
{
	int array[100];
	for (int i=1;i<=(sizeof(array)/sizeof(int));++i)
	{
		array[i-1]=i*3;//creo un array da 100 elementi moltiplicando per 3
		//printf("[%d] array=%d\n",i-1,array[i-1]); 
		//riga precedente serviva per testare inserimento
	}
	double res = media(array,(sizeof(array)/sizeof(int)));
	printf("Media degli elementi array = %f\n",res);
}
