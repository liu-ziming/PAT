// 1003. ��Ҫͨ��

//��ѧ���� ---�ҹ���

#include <stdio.h>
#include <string.h>

int main()
{
	int T;char str[100];
	scanf("%d",&T);
	getchar();  //ע�� �������ָ���֮�� �и��س�����
	while(T--)
	{
		gets(str);
		int len = strlen(str);
		int num_p=0,num_t=0,other=0;
		int loc_p=-1,loc_t=-1;
		//����һ���ַ���
		int i;
		for(i=0;i<len;++i)
		{
			if(str[i]=='P')
			{
				num_p++;loc_p=i;
			}
			else if(str[i]=='T')
			{
				num_t++;loc_t=i;
			}
			else if(str[i]!='A')  //otherͳ�Ƶ�ʱ����P A T֮����ַ� 
			    other++;
		 } 
		 
		 if(num_p!=1||num_t!=1||other!=0||(loc_t-loc_p==1))
		{
			printf("NO\n");continue;
		}
		//x y z �ĺ���ֱ�ʱ P  T �������Ҳ��ֵ���ĸ��
		int x,y,z;
		x = loc_p;y = loc_t-loc_p-1; z = len - loc_t - 1;
		if(z==x+x*(y-1))   //����2 �� y ����1 ʱ�����
		{
			printf("YES\n");
		 } 
		else
		    printf("NO\n");		
		
	 } //while
 } 
