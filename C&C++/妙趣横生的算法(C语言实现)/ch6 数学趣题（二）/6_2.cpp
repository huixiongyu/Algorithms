#include<iostream>
#include<cmath>
using namespace std;
void getXY(int N)
{
	int x,y;
	for(x=1;x<sqrt(N);x++)
		for(y=x;y<sqrt(N);y++)
		{
			if(x*x+y*y==N)
				cout<<x<<"^2+"<<y<<"^2="<<N<<endl;
		}
}

int main()
{
	int N;
	cout<<"Please input an ingeter N\n";
	cin>>N;
	getXY(N);
    getchar();
    return 0;
}

