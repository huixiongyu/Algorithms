#include<stdio.h> 
int main()
{
	int a[100],i,j,t,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n-1;i++)
		for(j=1;j<n-i;j++)	//ÿ�ζ��Ǵ�1��ʼ 
			if(a[j]<a[j+1])		//���Ƚ�С�������� 
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
	return 0;
}
