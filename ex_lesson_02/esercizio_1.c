#include <stdio.h>
#include <stdlib.h>//definisce EXIT_SUCCESS

int main()
{
	int ar[20];
	//ar[0]=20;
	//ar[1]=19;
	int lungar = sizeof(ar);
	int byinter=sizeof(int);
	int arlengh=lungar/byinter;
	printf("lungar=%d\n",lungar);
	printf("byinter=%d\n",byinter);
	printf("arlengh%d\n",arlengh);
	for(int i=0;i<20;++i)
	{
		ar[i]=20-i;
		//printf("%d\n",i);
	}
	for(int i=0;i<20;++i){
		printf("ar[%d]=%d\n",i,ar[i]);
	}
	return EXIT_SUCCESS;
}