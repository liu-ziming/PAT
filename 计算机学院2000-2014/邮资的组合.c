/*
1- ĳ���� 8 �ǵ���Ʊ 5 �ţ�1 Ԫ����Ʊ 4 �ţ�1 Ԫ 8 �ǵ���Ʊ 6 �ţ�����Щ��Ʊ�е�һ�Ż������� ���Եõ������в�ͬ�����ʣ� 
*/

#include <stdio.h>

int main()
{
	int m,b,c;
	int n=0;
	double a[1000];
	for(m=0;m<6;m++)
	    for(b=0;b<5;b++)
	        for(c=0;c<7;c++)
	        {
	        	a[n++]=0.8*m+1*b+1.8*c;
	        	printf("%.1lf ",0.8*m+1*b+1.8*c);
	        	if(n%10==0)
	        	    printf("\n");
			}
	
	printf("\n�������%d��\n",n);
	int i,j,n2=0; //ȥ�ظ�����n2�� 
	double t;
	for(i=0;i<n;i++)
	{
		t=a[i];
		int flag = 1;
		for(j=0;j<i;j++)
		    if(t==a[j]&&i!=j)
		    {
		    	flag=0;
		    	
		    	break;
			}
	    if(flag==1)
		{
			printf("%.1lf ",t);
			n2++;
	        if(n2%10==0)
	            printf("\n");
		}
		
		
	}
	printf("\nȥ�ظ���%d��",n2); 
 } 
 
