/*
9.7 �˻ʺ�����

*/


#include <stdio.h>
int num=0,ans[92][8],hang[8],n,b,i;

void queen(int i)
{
	int j,k;  // j k  �����Ǿֲ����� ���������������������׻��� 
	if(i==8)
	{
		for(j=0;j<8;++j)
		    ans[num][j]=hang[j]+1;//д��һ����ֵ 
		num++;
		return ;
		    
	}
	
	{
		for(j=0;j<8;++j)  //�� 
		{
			for(k=0;k<i;++k)  // 0~i-1�� �� ��i,j) �Ƚ� 
		        if(j==hang[k]||(j-hang[k]==i-k)||(hang[k]-j==i-k))
		             break;
		    if(k==i)
		    {
		    	hang[i]=j;
		    	queen(i+1);
			}
		}//for
		        
	}
}

int main()
{
	num=0;
	queen(0);
	scanf("%d",&n);
	int i;
	for(i=0;i<n;++i)
	{
		scanf("%d",&b);
		int j;
		for(j=0;j<8;j++)
		    printf("%d",ans[b-1][j]);
		printf("\n");
	}
	
	
 } 
