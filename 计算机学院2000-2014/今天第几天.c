/*

1/������������ ������ ����������Ǹ���ĵڼ���
2/�����������ݺ�������������
*/

#include <stdio.h>

int daytab[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
struct date
{
	int year;
	int month;
	int day;
}dt;

int day_of_year(int year ,int month,int day)
{
	int leap = (year%4==0&&year%100!=0||year%400==0);  //��������leapΪ1
	int i;
	for ( i = 0; i < month; ++i)
	{
		day=day + daytab[leap][i];

	}
	return day;
}

int month_day(int year,int yeardays,int *pmonth,int *pday)
{
	int leap = (year%4==0&&year%100!=0||year%400==0);  //��������leapΪ1
    int i;
    for(i=0;yeardays>daytab[leap][i];++i)
    	yeardays-=daytab[leap][i];
    *pmonth = i;
    *pday   = yeardays;
}


int main()
{
    int k;//K������ѡ��˵�������
    int yeardays;
    
    printf("k=1ѡ������һ\nk=2ѡ�������\n");
    scanf("%d",&k);
    if(k==1)
    {
         printf("���루�����գ�\n");
         scanf("%d%d%d",&dt.year,&dt.month,&dt.day);
        printf("���ǽ���ĵ�%d��\n",day_of_year(dt.year,dt.month,dt.day) );
    }
    if(k==2)
    {
    	printf("�����������\n");
    	scanf("%d%d",&dt.year,&yeardays);
    	month_day(dt.year,yeardays,&dt.month,&dt.day);
    	printf("������%d��%d��%d��\n",dt.year,dt.month,dt.day );
    }
    
}
