#include<iostream>
#include<algorithm>

using namespace std;

struct mooncake
{
	float amount;
	float price;
	float mere;
};

int func(mooncake a,mooncake b)
{
	return a.mere>b.mere;
}


int main()
{
    int n,need;
    cin>>n>>need;
    mooncake *a=new mooncake[n];
    float total=0.0;
    for(int i=0;i<n;i++)
    	cin>>a[i].amount;
    for(int j=0;j<n;j++)
    	cin>>a[j].price;
    for(int k=0;k<n;k++)
    	a[k].mere=a[k].price/a[k].amount;
    sort(a,a+n,func);
    for(int i=0;i<n;i++)
    {
    	if(a[i].amount<=need)
    		total+=a[i].price;
    	else 
    	{
    		total+=a[i].mere*need;
    		break;
		}
		need=need-a[i].amount;
    }		
    printf("%.2f",total);

    
    getchar();
    return 0;
}

