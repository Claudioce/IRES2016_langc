#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS

void zip(int* array1,int* array2,int* arraymix,int lungo)
{	
	int a=0;
	for(int i=0;i<lungo;++i)
	{	
		arraymix[a]=array1[i];
		a++;
		arraymix[a]=array2[i];
		a++;
	}
	
}	
void main()
{
	int l1l2=100;
	int array1[l1l2];
	int array2[l1l2];
	for (int i=0;i<l1l2;++i)
	{
		array1[i]=i*2;
		//printf("a1=%d\n",array1[i]);testo il ciclo
	}
	int dispari=1;
	for(int i=0;i<l1l2;++i)
	{
		array2[i]=dispari;
		dispari +=2;
		//printf("a2=%d\n",array2[i]);testo ilciclo
	}
	int lena1 = sizeof(array1)/sizeof(int);
	int len=lena1*2;
	int arraymix[len];
	zip(array1,array2,arraymix,lena1);
	for(int i=0;i<len;++i)
	{	
		printf("[%d] arraymix=%d\n",i,arraymix[i]);
	}


}
