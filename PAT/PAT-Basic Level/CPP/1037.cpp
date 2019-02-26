#include<iostream>
using namespace std;

int main(){
	int a,b,c,x,y,z,m,n,t;
	scanf("%d.%d.%d %d.%d.%d",&a,&b,&c,&x,&y,&z);
	if( a>x || (a==x & b>y ) || (a==x && b==y && c>z) )
	{
		swap(a,x);
		swap(b,y);
		swap(c,z);
		cout<<"-";
	}
	t = c > z? z+29 -c: z-c;
	y = c > z? y-1 : y;
	n = b > y? y+17- b: y-b;
	m = b > y? x-1 - a: x -a;
	printf("%d.%d.%d",m,n,t); 
	return 0;
}
