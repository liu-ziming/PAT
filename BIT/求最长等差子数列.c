#include <stdio.h>
#define MAXSIZE 100
int main()
{
	int i,j,k;
	int n,m;  int a[MAXSIZE];int delta;
	int maxlen=1,count=0;
	scanf("%d\n",&n);
	while(n)
	{
		maxlen=1;
		scanf("%d\n",&m);
		for(i=0;i<m;++i)
		    scanf("%d",&a[i]);
		if(m==1)
		    maxlen=1;
		else if(m==2)
		    maxlen =2;
		else 
		    for(j=1;j<m;j++)
	    	{
			    delta=a[j]-a[j-1];
			    count =1; //ÿ�������ҵȲ������ȳ�ʼ�������� 
			    for(k=j+1;k<m;k++)            //��ÿ��J��ʼ����ѯ��Ȳ����� 
			        if(delta==(a[k]-a[k-1]))
			            count++;
			        else        
					    break;
				if(maxlen<count+1)
				    maxlen=count+1; //countͳ���˵Ȳ������ж��ٸ���ֵ 
				 
	    	}
	    printf("%d\n",maxlen);
		
		
		
		n--;
	}
	
	
 } 
