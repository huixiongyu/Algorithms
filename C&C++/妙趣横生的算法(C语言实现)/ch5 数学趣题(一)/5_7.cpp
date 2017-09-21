#include<iostream>
using namespace std;
bool func(int i,int j)
{
	int buf[4],k=0;
	while(i)
	{
		buf[k++]=i%10;
		i=i/10;
	}
	if(buf[0]==buf[1])	return false;
	if(buf[0]==buf[2])	return false;
	if(buf[0]==buf[3])	return false;
	if(buf[0]==j)	return false;
	if(buf[1]==buf[2])	return false;					
	if(buf[1]==buf[3])	return false;
	if(buf[1]==j)	return false;
	if(buf[2]==buf[3])	return false;
	if(buf[2]==j)	return false;
	if(buf[3]==j)	return false;
	return true;						
}

int reverse(int n)
{
	int r=0;
	while(n)
	{
		r=r*10+n%10;
		n=n/10;
	}
	return r;
}



int main()
{
    int i,j;
    for(int i=1000;i<10000;i++)
    	for(j=1;j<10;j++)
    		if(i*j==reverse(i)&& func(i,j))
    			{
    				cout<<i<<endl;
    				cout<<"X  "<<j<<endl;
    				cout<<"-----"<<endl;
    				cout<<i*j<<endl;
				}
    getchar();
    return 0;
}

