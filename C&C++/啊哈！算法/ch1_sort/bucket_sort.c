#include<stdio.h>

int main()
{
	int i,j,t,n;
	int book[1001];
	for(i=0;i<1001;i++)
		book[i]=0;
	scanf("%d",&n);			//输入一个数n,表示接下来要输入数的个数 
	for(i=1;i<=n;i++){
		scanf("%d",&t);	//把每一个数读到变量t中 
		book[t]++;
	}
	for(i=1000;i>=0;i--)//一次判断编号1000-0的桶 
		for(j=1;j<=book[i];j++)	//出现几次就将桶的编号打印几次 
			printf("%d ",i);
	return 0;
}
