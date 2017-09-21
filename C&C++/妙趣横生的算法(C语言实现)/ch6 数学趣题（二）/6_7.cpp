#include<iostream>
using namespace std;
int func(int i)
{
	int j;
	for(j=10;j<1000;j=j*10)   //使用break退出 的时候，j的值维持在上次的值 
	{
		if(i/10==0)
			break;
	}
	if((i*i)%j==i) 
		return 1;
	else
		return 0;
}

void gettonggou()
{
	for(int i=1;i<=1000;i++)
	{
		if(func(i))
			cout<<i<<" ";
	}
}


int main()
{
	cout<<"The Tonggoushu bellow 1000 are"<<endl;
	gettonggou();
    getchar();
    return 0;
}

