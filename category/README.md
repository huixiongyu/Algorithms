# 试题分类


## 链表

1. 单向链表反转
```

ListNode *listReverse(ListNode *pHead)
{
	if(pHead == NULL)
		return NULL;
	ListNode *pCurrent ,*pPre,*pNext;
	                              //一、指针的初始化阶段
	pPre = pHead;
	pCurrent = pPre->next ;
 
	while(pCurrent)               //二、反转单链表的核心代码
	{
		pNext = pCurrent->next ;   //1. 缓冲pCurrent后面的单链表
		pCurrent->next = pPre ;	   //2. 反转单链表
		pPre = pCurrent;           //3.让pPre指针后移
		pCurrent = pNext ;         //4. 让pCurrent指针后移
	}
					   //三、处理并返回头指针
	pHead->next = NULL;                //把原头结点的next域变成空指针
	pHead = pPre ;		           //把头结点指向最后一个结点产生新的头结点，也就是把原单链表的尾结点变成头结点
 
	return pHead;
}

```


## 排序
1. 快速排序
```
#include <stdio.h>
int a[101],n;//定义全局变量，这两个变量需要在子函数中使用
void quicksort(int left,int right)
{
    int i,j,t,temp;
    if(left>right)
       return;

    temp=a[left]; //temp中存的就是基准数
    i=left;
    j=right;
    while(i!=j)
    {
		//顺序很重要，要先从右边开始找
		while(a[j]>=temp && i<j)
		j--;
		//再找右边的
		while(a[i]<=temp && i<j)
		i++;
		//交换两个数在数组中的位置
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
    }
    //最终将基准数归位
    a[left]=a[i];
    a[i]=temp;

    quicksort(left,i-1);//继续处理左边的，这里是一个递归的过程
    quicksort(i+1,right);//继续处理右边的 ，这里是一个递归的过程
}
int main()
{
    int i,j,t;
    //读入数据
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       scanf("%d",&a[i]);
    quicksort(1,n); //快速排序调用

    //输出排序后的结果
    for(i=1;i<=n;i++)
		printf("%d ",a[i]);
	getchar();getchar();
	return 0;
}

```

## 树
1. 二叉树的非递归中序遍历
2. 

## 图

