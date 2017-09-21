#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a,b,c;
	string x,y,z;
	for(a=0;a<=1;a++)    
		for(b=0;b<=1;b++)
			for(c=0;c<=1;c++)
			if(	((a&&!b)||(!a&&b)) && ((b&&!c) || (!b&&c)) && ((c&&a+b==0) || !c&&a+b!=0)	)
			{
				x=a? "truth":"lie";
				y=b? "truth":"lie";
				z=c? "truth":"lie";
				cout<<"¼× told a "<<x<<endl;
				cout<<"ÒÒ told a "<<y<<endl;
				cout<<"±û told a "<<z<<endl;
			}
    getchar();
    return 0;
}

