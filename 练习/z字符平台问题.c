// ���ַ�����  �ַ�ƽ̨
// һ���ַ���������������  ���������и��ַ�����ͬ�����Ϊ�ַ�ƽ̨
// ���벻����100  ���ַ���S  
// ���S�г������������ַ�ƽ̨����ʼλ�� �������ַ�  
// �ַ�ƽ̨���ܲ�ֹһ��  

 
#include <stdio.h>
#define MAXSIZE 101
void main()
{
	int count[MAXSIZE]={0};  //����ĸ[i] ��ʼ�� �ַ�ƽ̨���� 
	int len = 0;  //������� 
	int flag=0;  //����Ƿ�����ַ�ƽ̨ 
	char S[MAXSIZE];  
	gets(S);
	int i=0,j;
	for(;S[i]!='\0';++i)
    {
    	for(j=i;S[j+1]!='\0'&&S[j]==S[j+1];++j)  //ͳ��  ����ĸ��i����ͷ���ַ�ƽ̨���� 
    	{
    		count[i]++;
    		flag = 1;
		 } 
    	count[i]++;
    	if(count[i]>len)
    	{
    		len = count[i];
		}
		
	}
	if(flag== 0 )
	    return ;
	else
	    for(i=0;S[i]!='\0';++i)
	        if(count[i]==len)
	        
	    	    printf("%d,%c\n",i+1,S[i]);
		    
}
	
	
	
/*	
	while(S[i]!='\0')
	{
		if(S[i]==S[i-1])
        {	tpos = i-1;
	    	tch  =S[i];
	    	flag=1; 
	        while(S[i]==S[i-1])
	        {
			    count++;  
			    i++;
		    }
		}	
		if(count>len)
		{
			len = count;
			pos = tpos;
			ch = tch;
		}
		
		i++;
	}
	
	if(flag)
	printf("%d,%c",pos,ch);
 } */
