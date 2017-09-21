#include<iostream>
using namespace std;
typedef struct
{
	int num;
	int score;
	int rand;
 } player;

void sortScore(player psn[],int n)
{
	player tmp;
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-1-i;j++)
		{
			if(psn[j].score>psn[j+1].score)        //根据成绩大小，从小到大冒泡排序。 
			{
				tmp=psn[j];
				psn[j]=psn[j+1];
				psn[j+1]=tmp;
			}
		}
}

void setRand(player psn[],int n)
{
	int i,j=2;
	psn[0].rand=1;
	for(i=1;i<n;i++)
	{
		if(psn[i].score!=psn[i-1].score)   //由于成绩高，名次低（数字比较大），这里的j原本就比i位置的排名大1 
		{
			psn[i].rand=j;
			j++;
		}
		else 
			psn[i].rand=psn[i-1].rand;    //得分相同，排名相同 
	}
}

void sortNum(player psn[],int n) 
{
	player tmp;
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-1-i;j++)
		{
			if(psn[j].num>psn[j+1].num)	//整体交换，并不会影响选手的名次 
			{
				tmp=psn[j];
				psn[j]=psn[j+1];
				psn[j+1]=tmp;
			}
		}
}

void sortRand(player psn[],int n) 
{
	sortScore(psn,n);
	setRand(psn,n);
	sortNum(psn,n);
}

int main()
{
	player psn[7]={{1,5,0},{2,3,0},{3,4,0},{4,7,0},{5,3,0},{6,5,0},{7,6,0}};
	int i;
	sortRand(psn,7);
	cout<<"num	score	rand"<<endl;
	for(i=0;i<7;i++)
	{
		cout<<psn[i].num<<"	"<<psn[i].score<<"	"<<psn[i].rand<<endl;
	}
    getchar();
    return 0;
}

