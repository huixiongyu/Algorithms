#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int i);
bool isGoldbach(int a);
bool TestifyGB_Guess(int low,int high) ;


int main()
{	
	/* 验证1~100以内的哥德巴赫猜想  */ 
	cout<<"Now testify Goldbach Guess in the range of 1~100"<<endl<<endl;
	if(TestifyGB_Guess(1,100))
		cout<<endl<<"In the range of 1~100,Goldbach Guess is right!\n"<<endl;
	else
		cout<<endl<<"Goldbach is wrong!"<<endl;
	getchar();
	return 0;
}

bool isPrime(int num)
{
	int flag=1;
	if(num==1)	flag==0;
	for(int i=2;i<=sqrt(num);i++)
		if(num%i==0)
		{
			flag=0;
			break;
		}
	if(flag==1)
		return true;
	else
		return false;
}


bool isGoldbach(int a)
{
	int flag=0;
	for(int i=1;i<=a/2;i++)
	{
		if(isPrime(i) && isPrime(a-i)) 
		{
			flag=1;
			cout<<a<<"="<<i<<"+"<<a-i<<" ";
			break;
		}
	}
	if(flag==1)
		return true;
	else
		return false;
		
}

bool TestifyGB_Guess(int low,int high)
{
	int flag=1,count=0;
	for(int i=low;i<=high;i++)
	{
		if(i%2==0 && i>2)
		{
			if(isGoldbach(i))
			{
				count++;
				if(count%5==0)
					cout<<endl;
			}
			else
			{
				flag=0;
				break;
			}
		}

	}
	if(flag==1)
		return true;
	else
		return false;
}





