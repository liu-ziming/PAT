//  4.2ͳ���ַ���

//�ж�a-z 26���ַ���ɵ��ַ������ĸ��ַ����ִ������

//ע��  ������ͬʱȡASC����С��
//      ������1000�ַ� Ҫ����1001��С������

#include <stdio.h>
#include <string.h>
#define MAXSIZE 1001

void main()
{
	char s[MAXSIZE];
	int count[26]={0};
	int i;
	int cases,max;
	scanf("%d",&cases);
	while(cases>0)
	{
		scanf("%s",s);
		for(i=0;i<26;++i)  //����count����ÿ�ζ�Ҫ���³�ʼ�� 
		    count[i]=0;
	    for(i=0;i<strlen(s);++i) //ͳ��ÿ���ַ����ִ��� 
	        count[s[i]-'a']++;
    	max =0;
	    for(i=1;i<26;++i)
	        if(count[i]>count[max])
	            max = i;
	    printf("%c %d",'a'+max,count[max]); 
    	cases--;
	}
	
}
 
