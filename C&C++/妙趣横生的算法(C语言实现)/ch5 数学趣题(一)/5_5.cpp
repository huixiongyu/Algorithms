#include<iostream>
using namespace std;
bool accord(int i,int j,int k);
int main()
{
	int i,j,k;
	cout<<"百钱百鸡的所有解是："<<endl;
	for(i=0;i<=100;i++)
		for(j=0;j<=100;j++)
			for(k=0;k<=100;k++)
				if(accord(i,j,k))
					cout<<"cock="<<i<<" hen="<<j<<" chicken"<<k<<endl;
    getchar();
    return 0;
}


bool accord(int i,int j,int k)
{
	if(5*i+3*j+k/3==100 && k%3==0 && i+j+k==100)
		return true;
	else
		return false;
}
