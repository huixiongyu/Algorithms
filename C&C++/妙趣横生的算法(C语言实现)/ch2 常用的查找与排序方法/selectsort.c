#include"stdio.h"
void selectsort(int k[],int n)
{
	int i,j,max;
	for(i=1;i<=n;i++)							//0��λ�������������� 
	{
		max=i;
		for(j=i+1;j<=n;j++)
			if(k[j]>k[max])						//���������i���������¼�Ǹ�����λ�� 
				max=j;
		if(max!=i){
			k[0]=k[i];							//��������� ����i����ô���н��� 
			k[i]=k[max];
			k[max]=k[0];
		}
	}
}

int main(){
	int i,a[11]={99,2,5,6,3,7,8,0,9,12,1};			//��ʼ�����У���һ�����Զ���  
	printf("The original data array is\n");
	for(i=1;i<=11;i++)								//��ʾԭʼ������ 
		printf("%d ",a[i]);
	printf("\nsort\n");
	selectsort(a,10);								//ִ��ѡ������ 
	for(i=1;i<=10;i++)
		printf("%d ",a[i]);
	getchar();
}
