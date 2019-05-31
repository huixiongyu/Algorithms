# 微软面试题

## 第1组
1. 编写反转字符串的程序，要求优化速度、优化空间。
```
void reverse(char *str) {
  reverseFixlen(str, strlen(str));
}
void reverseFixlen(char *str, int n) {
  char* p = str+n-1;
  while (str < p) {
    char c = *str;
    *str++ = *p; *p--=c;
  }    
}

```
2. 在链表里如何发现循环链接？
```

typedef struct LinkNode
{
    int data;
     LinkNode *next;
}node;
  
void findCycleNode(node *head)
{
  node *slow,*fast;
  s0 = head;
  s1=head;
  while(（slow != NULL） &&(fast != NULL)&&(fast->next!=NULL))    { 
       slow = slow->next;
       fast = fast->next->next;
       if(slow == fast)
        {
             printf("有循环链接");
        }
   }
   if((fast == NULL) || (slow  == NULL)||fast->next==NULL)
     {
         printf("没有循环链接");
      }
}

```
3. 给出洗牌的一个算法，并将洗好的牌存储在一个整形数组里。
4. 写一个函数，检查字符是否是整数，如果是，返回其整数值。
```
    int sum=0;
    for(int i=0;i<strlen(ch);i++)
        sum=(ch[i]>='0'&&ch[i]<='9'&&sum!=-1)?sum*10+ch[i]-'0':-1;
    return sum;
```

