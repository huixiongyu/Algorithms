#include<iostream>
using namespace std;

int main()
{
	int sum=1;
	for(int i=9;i>=1;i--) 
		sum=2*(sum+1);
	cout<<"The number of peach are "<<sum<<endl;
    getchar();
    return 0;
}

