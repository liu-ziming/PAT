//�˻ʺ� 
#include <stdio.h>
#include <math.h>
int p[1000];
int count=0;
int n;
int print()
{
	count++;
	int i;
	for(i=1;i<=n;i++)
		printf("%d",p[i]);
	printf("\n");
	return 0;
}
int find(int i,int k)
{
	int j;
	for(j=1;j<k;j++){//k֮ǰ���� 
		if(p[j]==i || abs(p[j]-i)==abs(j-k))  
			return 0;
	}
	return 1;
}
int place(int k,int n)//�ŵ�k��     
{
	if(k>n){
		print();return 0;
	}
	int i;
	for(i=1;i<=n;i++){
		if(find(i,k)){
			p[k] = i;
			place(k+1,n);
		}
	}
	
	return 0;
}

int main()
{
//	int n;
	scanf("%d",&n);
	if(n>20) printf("������Χ���������\n");
	place(1,n); 
	printf("һ��%d����",count);
	return 0;
}
 
