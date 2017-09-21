#include<iostream>
using namespace std;
unsigned long myPow(int m,int n)
{
	unsigned long tmp;
	if(n==0)	
		return 1;
	if(n==1)
		return m;
	if(n%2==0)
	{
		tmp=myPow(m,n/2);
		return tmp*tmp;
	}
	if(n%2!=0)
		return m*myPow(m,n-1);
}


int main()
{
	int m,n;
	cout<<"Please input the bottom number\n";
	cin>>m;
	cout<<"Please input the expoent number\n";
	cin>>n;
	cout<<"The result of power("<<m<<","<<n<<") is "<<myPow(m,n);
    getchar();
    return 0;
}
 
