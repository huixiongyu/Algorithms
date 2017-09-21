#include<iostream>
using namespace std;

int func(int init,int n)
{
	int s=init;
	while(n)
	{
		s=5*s+1;
		n--;
	}
	return s;
}

int main()
{
	int total=func(6,4);
	cout<<"Fish which were gotten by fishers at least are "<<total<<endl;
    getchar();
    return 0;
}

