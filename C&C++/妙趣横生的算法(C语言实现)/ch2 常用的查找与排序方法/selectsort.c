#include"stdio.h"
void selectsort(int k[],int n)
{
	int i,j,max;
	for(i=1;i<=n;i++)							//0号位置用来交换数据 
	{
		max=i;
		for(j=i+1;j<=n;j++)
			if(k[j]>k[max])						//如果遇到比i大的数，记录那个数的位置 
				max=j;
		if(max!=i){
			k[0]=k[i];							//如果最大的数 不是i，那么进行交换 
			k[i]=k[max];
			k[max]=k[0];
		}
	}
}

int main(){
	int i,a[11]={99,2,5,6,3,7,8,0,9,12,1};			//初始化序列，第一个数自定义  
	printf("The original data array is\n");
	for(i=1;i<=11;i++)								//显示原始的序列 
		printf("%d ",a[i]);
	printf("\nsort\n");
	selectsort(a,10);								//执行选择排序 
	for(i=1;i<=10;i++)
		printf("%d ",a[i]);
	getchar();
}
