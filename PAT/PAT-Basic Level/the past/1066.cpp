#include<iostream>
using namespace std;

int main()
{
    int row,col,low,high,color;
    cin>>row>>col>>low>>high>>color;
    int temp;
    for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&temp);
			if(temp>=low&&temp<=high)
				temp=color;
			printf("%03d",temp);
			if(j!=col-1)
				cout<<" ";
		}
		cout<<endl;
	}
    
    getchar();
    return 0;
}

