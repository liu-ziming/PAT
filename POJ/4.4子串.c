//4.4 �ִ�

//  ��һ���ַ�������󹫹��ִ�    
//�����ַ���X ���䱾�����  x �ķ���   ��һ���ַ������Ӵ�
//�����  X ���ĳ���

// ����  t ���ַ�����   �ڷֱ������ַ�������� n ������ n ���ַ���

//���   ���������ִ��ĳ���

//2
//3
//ABCD
//BCDEF
//BRCD
//2
//rose
//orchiel

//ע��  ��Сд����
//˼��  ��  ���ַ���������̵��ַ���x0ȡ���� �� x0 �ĸ��ִ��� ������  �ж��Ƿ����������� ֪���ҵ�һ������ �������ִ�
//  �ѵ�   x0���ִ�Ҫ�ӳ������ж� -- �Ҵ�������  �ַ��������� -- 
#include <stdio.h>
#include <string.h>

int t , n ;
char str[100][101];
 
int searchMaxSubString(char *source)
{
	int subStrLen=strlen(source),sourceStrLen=  strlen(source);
	char subStr[101],revSubStr[101];
	int i,j;
	int foundMaxSub;
	
	while(subStrLen>0) //�������г��ȵ��ִ��������ʼ 
	{
		for(i=0;i<=sourceStrLen-subStrLen;++i) //---erro  �Ӵ�����Ϊsubstrlenʱ���� sourcestrlen - substrlen +1 ���Ӵ� 
	    {
	    	//��������ΪsubStrLen �������ִ�
			strncpy(subStr,source+i,subStrLen);        //strncpy ���÷�(Ŀ���ַ����Դ����ʼ��ַ�����Ƴ��ȣ� 
	    	strncpy(revSubStr,source+i,subStrLen); 
	    	subStr[subStrLen]=revSubStr[subStrLen]='\0'; //���ƹ������ִ���Ҫ��'\0'
		    strrev(revSubStr);  //Rev 
		    foundMaxSub = 1;
			for(j=0;j<n;j++)
			{
				if(strstr(str[j],subStr)==NULL&&strstr(str[j],revSubStr)==NULL)   //�����ַ����в����ִ� 
			    {
			    	foundMaxSub = 0;
			    	break;
				}
			 } 
			 if(foundMaxSub==1)
			     return subStrLen; //�ҵ����ʵĳ��� 
						 
		}//for		
		subStrLen--;
	}//while
	return 0;
	
}

void main()
{
	int i,j=0,minStrLen;
	char minStr[101];  //��¼��̵��ַ�����
	
    scanf("%d",&t);
    int subStrLen[t];
	while(t--)
	{
		scanf("%d",&n);
		minStrLen = 100;
		for(i=0;i<n;i++)   //��һ���ַ������� 
		{
			scanf("%s",str[i]);
			if(strlen(str[i])<minStrLen)  //�ҳ� ��� ���ַ��� ����¼ 
			{
				minStrLen = strlen(str[i]);
				strcpy(minStr,str[i]);				
			}
		}
		subStrLen[j++]= searchMaxSubString(minStr);  //��minStr������������������ִ� 		
	 } //while
	 
	 for(i=0;i<j;++i)      //ͳһ������������Ӵ����� 
	     printf("%d\n",subStrLen[i]);
	 
}
 









 
