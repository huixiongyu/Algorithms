#include<stdio.h>

int main()
{
	int i,j,t,n;
	int book[1001];
	for(i=0;i<1001;i++)
		book[i]=0;
	scanf("%d",&n);			//����һ����n,��ʾ������Ҫ�������ĸ��� 
	for(i=1;i<=n;i++){
		scanf("%d",&t);	//��ÿһ������������t�� 
		book[t]++;
	}
	for(i=1000;i>=0;i--)//һ���жϱ��1000-0��Ͱ 
		for(j=1;j<=book[i];j++)	//���ּ��ξͽ�Ͱ�ı�Ŵ�ӡ���� 
			printf("%d ",i);
	return 0;
}
