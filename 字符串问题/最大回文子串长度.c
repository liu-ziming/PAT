
//������Ӵ�����  �㷨  

#include <stdio.h>
#define N 1000

char b[N],a[N<<1];
int p[N<<1] ;  //����һλ �൱�� 2 ��
int min(int a,int b)
{
	return a<b?a:b;
} 
 
int main()
{
	int i,n,id,maxL,maxId;
	while(scanf("%s",&b[1])!=EOF)
	{
		maxL = maxId = 0;
		for(i=1;b[i]!='\0';i++) 
		{
			a[i<<1] = b[i];
			a[(i<<1)+1] = '#';
		}
		a[0]='?';a[1]='#';;
		n=(i<<1)+2;a[n]=0;
		maxId=maxL=0;    //init
		for(i=1;i<n;i++)
		{
			if(maxId>i)  // �� �򻯼�������� 
			    p[i]=min(p[2*id-i],maxId-i);  //id ��¼Ŀǰ��Ӵ������ģ�maxId��¼������Ӵ�һ��ĳ���
			else 
			    p[i] = 1;
			while(a[i+p[i]]==a[i-p[i]])//����i����������Ӵ� 
			    p[i]++;
			if(p[i]+i>maxId)//����Ŀǰ�������Ӵ�  ���Ҷ��±�������±� 
			{
				maxId=p[i] + i;
				id=i;
			 } 
			if(p[i]>maxL)  //����Ŀǰ�������Ӵ��ĳ���
			    maxL = p[i];
			 
			 //��󳤶�L=  2*p[i]-1  ����ȥ�� # ����L- 1��/2 =p[i] -1 ��maxL -1  
		 } 
		 printf("%d\n",maxL-1);
	}
	
	
 } 

