#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	int x,y,z;
	scanf("%d.%d.%d",&a,&b,&c);
	scanf("%d.%d.%d",&x,&y,&z);
	int temp,flag=0;
	if(a>x || (a==x && b>y) || (a==x && b==y && c>z)    )
	{
		temp=a;
		a=x;
		x=temp;
		
		temp=b;
		b=y;
		y=temp;
		
		temp=c;
		c=z;
		z=temp; 
		
		flag=1;
	}
	int Ga,Si,Kn;
	if(z>=c)
		Kn=z-c;
	else
	{
		Kn=29+z-c;	
		y=y-1;
		
	}	
	if(y>=b)	
		Si=y-b;
	else
	{
		Si=(17+y)-b;
		x=x-1;
	}	
	Ga=x-a;
	if(flag==1)
		cout<<"-";
	cout<<Ga<<"."<<Si<<"."<<Kn;
    getchar();
    return 0;
}

