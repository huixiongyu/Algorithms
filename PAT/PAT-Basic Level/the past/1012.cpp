#include<iostream>
using namespace std;

int main(){
	int n,i;
	int A1=0,A2=0,A3=0,A5=0;
	int flag1=0,flag2=0,flag3=0,flag4=0,flag5=0;
	float A4=0.0;
	int t=0,count=0;
	cin>>n;
	int *a=new int[n];
	int *b=new int[n];
	for(i=0;i<n;i++)
	{	
		cin>>a[i];
		b[i]=0;
	}
	
	for(i=0;i<n;i++){
		if(a[i]%10==0)
		{
			A1+=a[i];
			flag1=1;
		}
		if(a[i]%5==1)
		{
			b[t++]=a[i];
			flag2=1;
		}
		if(a[i]%5==2)
		{
			A3++;
			flag3=1;
		}
		if(a[i]%5==3)
		{
			A4+=a[i];
			count++;
			flag4=1;
		}
		if(a[i]%5==4)
		{
			if(A5<a[i])
				A5=a[i];
			flag5=1;
		}
		
	}
	for(i=0;i<t;i++)
	{
		if(i==0||i%2==0)
			A2+=b[i];
		else
			A2-=b[i];
	}
	A4=A4/count;
	if(flag1==1) 
		cout<<A1<<" ";
	else
		cout<<"N ";
	if(flag2==1) 
		cout<<A2<<" ";
	else
		cout<<"N ";
	if(flag3==1) 
		cout<<A3<<" ";
	else
		cout<<"N "; 
	if(flag4==1) 
		printf("%0.1f ",A4);
	else
		cout<<"N ";
	if(flag5==1) 
		cout<<A5;
	else
		cout<<"N";
	delete [] b;
	delete [] a;
	getchar();
	return 0;
}
