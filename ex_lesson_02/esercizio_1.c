#include <stdio.h>
#include <stdlib.h>//definisce EXIT_SUCCESS

int main()
{
	int myarray[20];
	//myarray[0]=20;
	//myarray[1]=19;
	int myarraybytelengh = sizeof(myarray);
	int intbytes=sizeof(int);
	int myarraylengh=myarraybytelengh/intbytes;
	printf("myarraybytelengh=%d\n",myarraybytelengh);
	printf("intbytes=%d\n",intbytes);
	printf("myarraylengh%d\n",myarraylengh);
	for(int i=0;i<20;++i)
	{
		myarray[i]=20-i;
		//printf("%d\n",i);
	}
	for(int i=0;i<20;++i){
		printf("myarray[%d]=%d\n",i,myarray[i]);
	}
	return EXIT_SUCCESS;
}