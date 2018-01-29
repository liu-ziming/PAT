/*
40-合并果子 

//哈夫曼 最优思想

思路  N堆果子 需要合并N-1次，  每次先降序排序   
再选取最小的 两堆相加，结果重新加入数组， 且数组len-1 

*/

 #include <stdio.h>
 #include <stdlib.h>
 
 int cmp(const void *a,const void *b)
 {
 	return *(int*)a<*(int *)b?1:-1;
 	
 }
 
 int main()
 {
 	int n;
 	scanf("%d",&n);
 	int i;int a[n];
 	for(i=0;i<n;++i)
 	    scanf("%d",&a[i]);
 	int len=n;  //len 为每次合并后的数组长度 
 	int sum=0;
 	for(i=0;i<n-1;++i) //合并 n-1次
	{
		qsort(a,len,sizeof(a[0]),cmp);
		int ans=a[len-1]+a[len-2];
		a[len-2]=ans;  //最小两个的和 再放回倒数第二个位置 
		len--;           //数组减小 1   
		sum+=ans;
	 } 
	printf("%d",sum);
  } 
