/*
 
1-33. ���, ���붥���ַ���ͼ�εĸߡ�����������������ַ�Ϊ'A'��ͼ�εĸ�Ϊ5����ʾ��ͼ�Σ� 
                    A
                  B C D
                E F G H I
              J K L M N O P
            Q R S T U V W X Y����
*/
#include<stdio.h>
#define N 100
void main()
{
	char c;int n;
	scanf("%c%d",&c,&n);
	int i,j,k;
	for(i=0;i<n;++i)
	{
		for(j=0;j<n-i-1;++j)
		    printf(" ");
		for(k=0;k<2*i+1;++k)
		{
			if(c=='z'+1||c=='Z'+1)   //�ǵ�ѭ����ĸ�� 
			    c=c-26;
			printf("%c",c++);
		}
		printf("\n");
	}
	
	
 } 

