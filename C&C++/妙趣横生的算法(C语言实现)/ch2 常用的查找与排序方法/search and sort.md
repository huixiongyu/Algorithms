## 选择排序：

选择排序的第i趟排序就是从序列的后n-i+1(i=1,2.....,n-1)个元素中选择一个最小(最大)的元素，并与第i个位置上的元素进行交换的过程。

```
void selectsort(keytype k[],int n){
  int i,j,min;
  keytype tmp;
  for(i=1;i<n-1;i++){
    min=i;
    for(j=i+1;i<=n;j++)
    	if(k[j]<k[min])
    		min=j;
    if(min!=i)
    {
      tmp=k[min];
      k[min]=k[i];
      k[i]=tmp;
    }
  }
}
```

