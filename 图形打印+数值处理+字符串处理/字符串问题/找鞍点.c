/*3-11. ��̣��ҳ�һ����ά�����еİ��㣬
����λ���ϵ�Ԫ���Ǹ����ϵ����ֵ���Ǹ����ϵ���Сֵ��
��ά����Ҳ����û�а��㡣
*/ 
#include<stdio.h>
#include<string.h>

int main()
{
	int maxrow=0,mincol=0;
	int i,j;int max,min;
	int a[100][100]; 	
	int n;
	scanf("%d",&n);
	for(i=0;i<n;++i)
	    for(j=0;j<n;++j)
	        scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{
		max=a[i][0];
		maxrow=0;
		for(j=0;j<n;j++)   
	    	if(a[i][j]>max)
			{
				max=a[i][j];
				maxrow = i;
			}			
		
		min = a[0][maxrow];
		mincol = 0; 
	    for(j=0;j<n;++j)
	        if(a[j][maxrow]<min)
	        {
	        	min=a[j][maxrow];
	        	mincol = j;
			}
	            
	    if(max==min)
	    {
	    	printf("%d %d",maxrow,mincol);
	    	return;
		}
	        
	}
 } 
