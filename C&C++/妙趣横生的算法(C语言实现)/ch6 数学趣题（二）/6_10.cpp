#include<iostream>
using namespace std;

int main()
{
	int x,y,z;
	cout<<" Men  Women   Children\n";
	for(x=1;x<30;x++) 
		for(y=1;y<30;y++)
			for(z=1;z<30;z++)
			{
				if(3*x+2*y+z==50 && x+y+z==30)
					printf("%5d%5d%5d\n",x,y,z);
			}
    getchar();
    return 0;
}

