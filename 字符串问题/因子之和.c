
#include <stdio.h>
int fun(int n)
{
	int sum=0,i,m=n;
	for(i=2;i<m;i++){  //�����㷨ʹ��һ��ѭ�� ����������� m  i 
		m=n/i;
		if(n%i==0){
			sum+=m+i;
		}	
	}
	return sum;
}

void main(void)
{
  printf("%5d",fun(120));
}





