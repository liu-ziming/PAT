/*

2-.��дһ�������࣬Ҫ�� xxxx-xx-xx �ĸ�ʽ����� �ڣ�ʵ�ּ�һ��Ĳ������������������⣬�����·� ��Ϊ 30 �졣����ںв���ʱ������ 2004 �� 3 �� 20 �գ��õ���һ���ʱ��Ϊ 2004-3-21 ���ܵ�һ���ַ� �������� 2004 �� 3 �� 30 �գ��õ���һ���ʱ��Ϊ 2004-4-1���ܵ�һ���ַ��������� 2004 �� 12 �� 30 �գ��õ���һ���ʱ��Ϊ 2005-1-1 ������ʱ��Խ�� ����,�ܵ�ȫ���������������� 30��

*/

#include <stdio.h>
#include <string.h>

int main()
{
	int year,month,day;
	scanf("%d-%d-%d",&year,&month,&day);
	if(day>30||day<0||month>12||month<0)
	{
		printf("erro");
		return ;
	}
	else
	{
		day++;
		if(day==31)
		{
			month++;
			day=1;
		}
		if(month==13)
		{
			month=1;
			year++;
		}	
	}
	
	printf("%d��%d��%d��",year,month,day);	
}




 
