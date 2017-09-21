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
			if(psn[j].score>psn[j+1].score)        //���ݳɼ���С����С����ð������ 
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
		if(psn[i].score!=psn[i-1].score)   //���ڳɼ��ߣ����εͣ����ֱȽϴ󣩣������jԭ���ͱ�iλ�õ�������1 
		{
			psn[i].rand=j;
			j++;
		}
		else 
			psn[i].rand=psn[i-1].rand;    //�÷���ͬ��������ͬ 
	}
}

void sortNum(player psn[],int n) 
{
	player tmp;
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-1-i;j++)
		{
			if(psn[j].num>psn[j+1].num)	//���彻����������Ӱ��ѡ�ֵ����� 
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

