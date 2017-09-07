#include<iostream>
using namespace std;

int main()
{
    char p[105],q[105];
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    	cin>>p[i]>>q[i];
    int x1=0,x2=0,x3=0,y1=0,y2=0,y3=0;
    int maxp[3]={0,0,0},maxq[3]={0,0,0};
    for(int i=0;i<N;i++)
    {
    	if(p[i]==q[i])
    	{
    		x2++;
    		y2++;
    		
    		continue;
		}
		if(p[i]=='C' && q[i]=='J')
		{
			x1++;
			y3++;
			
			maxp[1]++;
			continue;
		}
		if(p[i]=='C' && q[i]=='B')
		{
			x3++;
			y1++;
			
			maxq[0]++;
			continue;
		}
		if(p[i]=='J' && q[i]=='C')
		{
			x3++;
			y1++;
			
			maxq[1]++;
			continue;
		}
		if(p[i]=='J' && q[i]=='B')
		{
			x1++;
			y3++;
			
			maxp[2]++;
			continue;
		}
		if(p[i]=='B' && q[i]=='J')
		{
			x3++;
			y1++;
			
			maxq[2]++;
			continue;
		}
		if(p[i]=='B'&&q[i]=='C')
		{
			x1++;
			y3++;
			
			maxp[0]++;
		}
    		
	}
	cout<<x1<<" "<<x2<<" "<<x3<<endl;
	cout<<y1<<" "<<y2<<" "<<y3<<endl;
	const char pic[3]={'B','C','J'};
	int t=0,s=0;
	int m1=maxp[0],m2=maxq[0];
	for(int i=1;i<3;i++)
	{
		if(maxp[i]>m1)
		{
			t=i;
			m1=maxp[i];
		}	
		if(maxq[i]>m2)
		{
			s=i;
			m2=maxq[i];
		}
	}
	cout<<pic[t]<<" "<<pic[s];
    getchar();
    return 0;
}

