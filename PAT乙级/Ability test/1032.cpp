#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int num,score;
    int N;
    cin>>N;
	vector<int> a(100001);
	for(int i=0;i<N;i++)
	{
		cin>>num>>score;
		a[num]+=score;
	}
	int max=a[1],t=1;
	for(int i=1;i<=100000;i++) 
	{
		if(a[i]>max)
		{
			max=a[i];
			t=i;
		}
	}
	cout<<t<<" "<<max;
	
    return 0;
}

