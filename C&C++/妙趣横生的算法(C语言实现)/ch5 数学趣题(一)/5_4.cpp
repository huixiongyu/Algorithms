#include<iostream>
using namespace std;

int main()
{
	int red,yellow,green;
	cout<<"red 	yellow 	green"<<endl;
	for(red=0;red<=3;red++)
		for(yellow=0;yellow<=3;yellow++)
			for(green=2;green<=6;green++)
				if(red+yellow+green==6)
					cout<<red<<"	"<<yellow<<"	"<<green<<endl;
    getchar();
    return 0;
}

