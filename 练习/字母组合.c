 //  ������ĸ a b c  
 //  �õݹ�� ���� ���� ��Щ��ĸ�����
 //   ����Ϊ  n  �����ַ���  ��  �ַ��� ����
 //   ����ݹ�
 
 //����  :  ����Ϊ m ����ĸ  ��� n λ���ַ������⡣ ��n �������m ����  --����Ϊ n �ı� ,m ���� 
 // ˼����  ��һ��ȫ�����飬  ��һ��ָ��ָ�����飬  �ݹ�غ���ָ�룬�ı��������ϡ� 
 //   
 
 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #define MAXSIZE 100
 char s[MAXSIZE];
 
 void print(char str[])
 {  
    char *p;
 	for(p=s;p<=str;++p)     //����sΪ ȫ�ֱ��� 
 	{
 		printf("%c",*p);
	 }
	 printf("\n");
  } 
 
 
 
 void func(char s[] ,int n )  //�ݹ� 
 {
 	char i = 'a';
	if(n>=1) 
 	    for(;i<='c';++i)
 	    {
 		    *s = i;
 		    func(s+1,n-1);   //n  ����ϵ�λ��    
 		                    //�ݹ������ s ָ�루�ֲ��������ı�ȫ������ s 
	    }
	else
 		    print(s); 
  } 
  
  void main()
  {
  	char *str = s;
  	int n;
  	scanf("%d",&n);
  	while(n<1)
  	    scanf("%d",&n);
  	func(str,n);
  	printf("%.0f\n",pow(3,n));
  	
   } 
  
  
  
