#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<int> a(N),b(101);
    for(int i=0;i<N;i++) 
    {
    	cin>>a[i];
    	b[a[i]]++;
	}
	int k,num;
	cin>>k;
	for(int i=0;i<k;i++)
	{
		cin>>num;
		if(i!=0)
			cout<<" ";
		cout<<b[num];
	}
    getchar();
    return 0;
}

