/*
 2-10. ��̣�������и�λ��Ϊ6���ܱ�31��������λ�����������

/*/ 
#include<stdio.h>
#include<math.h>
void main()
{
	int count=0,i;
	for(i=10006;i<=99999;i=i+10)
	{
		if(i%10==6&&i%31==0)
		{
			printf("%d\n ",i);
			count++;
		}
		
	}
	printf("������%d",count);
 } 
