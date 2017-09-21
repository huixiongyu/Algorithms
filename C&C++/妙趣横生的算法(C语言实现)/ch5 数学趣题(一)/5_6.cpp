#include<iostream>
using namespace std;

bool isCircle(int n);
int reverse(int i);

int main()
{
	int num;
	cout<<"Type a integer for judging is Circle:" <<endl;
	cin>>num; 
	if(isCircle(num))
		cout<<num<<" is Circle"<<endl;
	else
		cout<<num<<" is not Circle"<<endl;
    getchar();
    return 0;
}


bool isCircle(int n)
{
	int m;
	m=reverse(n);
	if(m==n)
		return true;
	else 
		return false;
}

int reverse(int i)
{
	int m,j=0;
	m=i;
	while(m)
	{
		j=j*10+m%10;    //把末位移到前面去 
		m=m/10;
	}
	return j;
}




