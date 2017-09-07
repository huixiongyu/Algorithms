#include<iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;
	int temp[3]={0};
	int i=0;
	while(n>0)
	{
		temp[i++]=n%10;
		n=n/10;
	}
	for(int j=0;j<temp[2];j++)
		cout<<"B";
	for(int j=0;j<temp[1];j++)
		cout<<"S";
	for(int j=0;j<temp[0];j++)
		cout<<j+1;
	getchar();
    return 0;
}
