/*
2-4. С�����屾���飬Ҫ���A��B��C��λС���ѣ�ÿ��ÿ��ֻ�ܽ�һ������̣�������в�ͬ�Ľ跨��
*/ 
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int i,j,k;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			for(k=0;k<5;k++)
				if(i!=k&&i!=j&&k!=j)
					printf("%d %d %d\n",i,j,k);
}
 
