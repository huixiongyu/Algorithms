#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int num,score;
    int N;
    cin>>N;
	vector<int> a(N);
	int max=0,t=1;
	for(int i=0;i<N;i++)
	{
		cin>>num>>score;
		a[num]+=score;
		if(a[num]>max)
		{
			max=a[num];
			t=num;
		}

	}
	cout<<t<<" "<<max;
	
    return 0;
}

