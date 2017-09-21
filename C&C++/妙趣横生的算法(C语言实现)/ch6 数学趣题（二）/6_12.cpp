#include<iostream>
using namespace std;
int getFalseCoin(int coin[],int low,int high)
{
	int i,sum1=0,sum2=0,sum3=0;
	if(low+1==high)
	{
		if(coin[low]<coin[high])	
			return low+1;
		else
			return high +1; 
	}
	if((high-low+1)%2==0)
	{
		for(i=low;i<=low+(high-low)/2;i++)
			sum1=sum1+coin[i];
		for(i=low+(high-low)/2+1;i<=high;i++)
			sum2=sum2+coin[i];
		if(sum1<sum2)
			return getFalseCoin(coin,low,(high-low)/2);
		else
			return getFalseCoin(coin,low+(high-low)/2+1,high);
	}
	if((high-low+1%2!=0))
	{
		for(i=low;i<=low+(high-low)/2-1;i++)
			sum1=sum1+coin[i];
		for(i=low+(high-low)/2+1;i<=high;i++)
			sum2=sum2+coin[i];
		sum3=coin[low+(high-low)/2];
		if(sum1<sum2)
			return getFalseCoin(coin,low,low+(high-low)/2-1);
		else if(sum2<sum1)
			return getFalseCoin(coin,low+(high-low)/2+1,high);
		else
			return low+(high-low)/2+1;
	}
}

int main()
{
	int coin[30]={2,2,2,2,2,2,2,2,2,2,   2,2,2,2,2,2,2,2,2,2,   2,2,2,2,2,2,2,1,2,2};
	cout<<"The "<<getFalseCoin(coin,0,29)<<"th coin is false\n";
    getchar();
    return 0;
}

