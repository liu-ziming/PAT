/**
 * 1002. д������� (20)
ʱ������
400 ms
�ڴ�����
65536 kB
���볤������
8000 B
�������
Standard
����
CHEN, Yue
����һ����Ȼ��n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�
�����ʽ��ÿ�������������1��������������������Ȼ��n��ֵ�����ﱣ֤nС��10100��
�����ʽ����һ�������n�ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ���1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�
����������
1234567890987654321123456789
���������
yi san wu
*/
#include<stdio.h>
#include<math.h>
main()
{
	int c,sum,sum_c,digit,num;
	sum=0;
	while((c=getchar())!='\n')
	{
		sum+=(c-'0');
	}
	sum_c=sum;
	digit=0;
	do
	{
		sum_c/=10;
		digit++;
	}
	while(sum_c);
	while(digit)
	{
		num=sum/pow(10,digit-1);
		if(digit==1)
		{
			switch(num)
			{
				case 1:printf("yi");break;
				case 2:printf("er");break;
				case 3:printf("san");break;
				case 4:printf("si");break;
				case 5:printf("wu");break;
				case 6:printf("liu");break;
				case 7:printf("qi");break;
				case 8:printf("ba");break;
				case 9:printf("jiu");break;
				case 0:printf("ling");break;
			}
			break;
		}
		switch(num)
		{
			case 1:printf("yi ");break;
			case 2:printf("er ");break;
			case 3:printf("san ");break;
			case 4:printf("si ");break;
			case 5:printf("wu ");break;
			case 6:printf("liu ");break;
			case 7:printf("qi ");break;
			case 8:printf("ba ");break;
			case 9:printf("jiu ");break;
			case 0:printf("ling ");break;
		}
		sum=sum-num*pow(10,digit-1);
		digit--;
	}

}
