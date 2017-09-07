#include"stdio.h"
int gcd(int a,int b)	//求最大公约数 
{
	int min;
	if(a<=0 || b<=0)  return -1;
	if(a>b)
		min=b;
	else
		min=a;
	while(min)
	{
		if(a%min==0 && b%min==0)
			return min;
		min--;
	}
	return -1;
}

int lcm(int a,int b)	//求最大公倍数
{
	int max;
	if(a<=0 || b<=0)	return -1;
	if(a>b)
		max=a;
	else
		max=b;
	while(max)
	{
		if(max%a==0 && max%b==0)
			return max;
		max++;
	}
	return -1;
 } 
 
 
 int main()
 {
 	int a,b;
 	printf("Please intput to digit for getting GCD and LCM\n");
 	scanf("%d %d",&a,&b);
 	printf("The GCD of %d and %d is %d\n",a,b,gcd(a,b));
 	printf("The LCM of %d and %d is %d\n",a,b,lcm(a,b));
 	getchar();
 	return 0;
 }


