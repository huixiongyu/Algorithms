#include<iostream>
#include<cmath>
using namespace std;
bool mode_1(int N) 
{
	if((int)sqrt(N)*(int)sqrt(N)==N)
	{
		cout<<(int)sqrt(N)<<"*"<<(int)sqrt(N)<<"="<<N;
		return true;
	}
	else 
		return  false;
}

bool mode_2(int N)
{
	int x,y;
	for(x=1;x<sqrt(N);x++)
		for(y=x;y<sqrt(N);y++)
		{
			if(x*x+y*y==N)
			{
				cout<<x<<"^2+"<<y<<"^2="<<N<<endl;
				return true;
			}
		}
	return false;
}


bool mode_3(int N)
{
	int x,y,z;
	for(x=1;x<sqrt(N);x++)
		for(y=x;y<sqrt(N);y++)
			for(z=y;z<sqrt(N);z++)
			{
				if(x*x+y*y+z*z==N)
				{
					cout<<x<<"^2+"<<y<<"^2+"<<z<<"^2="<<N<<endl;
					return true;
				}
			}
	return false;
}

bool mode_4(int N)
{
	int x,y,z,t;
	for(x=1;x<sqrt(N);x++)
		for(y=x;y<sqrt(N);y++)
			for(z=y;z<sqrt(N);z++)
				for(t=z;t<sqrt(N);t++)
				{
					if(x*x+y*y+z*z+t*t==N)
					{
						cout<<x<<"^2+"<<y<<"^2+"<<z<<"^2+"<<t<<"^2="<<N<<endl;
						return true;
					}
				}
	return false;
}

void proveFourSquares(int N)
{
	if(mode_1(N))
		cout<<"It has verified Four Squres";
	else if(mode_2(N))		
		cout<<"It has verified Four Squres";
	else if(mode_3(N))
		cout<<"It has verified Four Squres";
	else if(mode_4(N))
		cout<<"It has verified Four Squres";
}

int main()
{
	int num;
	cout<<"Please Input a natural number:";
	cin>>num;
	cout<<"--------------testing-------------"<<endl;
	proveFourSquares(num);
    getchar();
    return 0;
}

