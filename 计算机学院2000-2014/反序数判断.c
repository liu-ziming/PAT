/* 
��N����λ�� ������9��ǡ�����䷴����
�� 1234 �ķ����� 4321   
��N��ֵ
*/

#include <stdio.h>

int main()
{
	int N,N2,N3;
	int t;
	for(N=1000;N<=9999;N++)
	{
		N3=0;
		N2=9*N;
		t=N;
	    while(t)
	    {
	    	N3=10*N3+t%10;
	    	t/=10;
	    }
	    if(N2==N3)  //t �Ƿ����� N2 �Ǿű� 
	        printf("%d ",N); 
	   	
	}
	
	
 } 
