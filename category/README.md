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


## 树


## 图

