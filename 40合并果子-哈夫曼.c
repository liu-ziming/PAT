/*
40-�ϲ����� 

//������ ����˼��

˼·  N�ѹ��� ��Ҫ�ϲ�N-1�Σ�  ÿ���Ƚ�������   
��ѡȡ��С�� ������ӣ�������¼������飬 ������len-1 

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
 	int len=n;  //len Ϊÿ�κϲ�������鳤�� 
 	int sum=0;
 	for(i=0;i<n-1;++i) //�ϲ� n-1��
	{
		qsort(a,len,sizeof(a[0]),cmp);
		int ans=a[len-1]+a[len-2];
		a[len-2]=ans;  //��С�����ĺ� �ٷŻص����ڶ���λ�� 
		len--;           //�����С 1   
		sum+=ans;
	 } 
	printf("%d",sum);
  } 
