#include<stdio.h>
#include"math.h"

int main()
{
	double sum=0;
	int i;
	for(i=0;i<64;i++)
		sum=sum+pow(2,i);
	printf("The number of the grain is \n%f\n",sum);
}
