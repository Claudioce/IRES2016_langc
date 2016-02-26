#include <stdio.h>
#include <math.h>

int prendisomma(int* valore)
{
for(int i=0;i<5;++i)
{			
int b=valore[i];
valore=b*b;			
printf("%d\n",b);
}

return valore;			
}				
void main()
{	
int ar[5]= {2,3,4,3,4};
prendisomma(&ar);
printf("%d\n",prendisomma(valore));
//printf("%d\n",valore);
}
		