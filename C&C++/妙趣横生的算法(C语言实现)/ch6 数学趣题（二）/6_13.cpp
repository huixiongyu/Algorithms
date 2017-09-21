#include<iostream>
using namespace std;
int cnr(int m,int n)
{
	if(m==n || n==0)
		return 1;
	else
		return cnr(m-1,n)+cnr(m-1,n-1);
}

int main()
{
	int m,n;
	cout<<"Please input m and n for C(m,n)\n";
	cin>>m>>n;
    getchar();
    cout<<"C("<<m<<","<<n<<")="<<cnr(m,n)<<endl;
    return 0;
}

