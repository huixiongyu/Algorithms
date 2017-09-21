#include<iostream>
using namespace std;

int main()
{
	int x=7,i,res,flag=0;
	for(i=1;i<=100;i++)    
	{
		if((x%2==1) && (x%3==2) && (x%5==4) && (x%6==5))
		{
			res=x;
			flag=1;
			break;
		}
		x=7*(i+1);
	}
	if(flag==1)
		cout<<"The result of Einstein's question is "<<res;
	else
		cout<<"In this range cannot get result"	<<endl;
    getchar();
    return 0;
}

