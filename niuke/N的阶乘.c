
//N �Ľ׳�

#include <stdio.h>

int main()
{
	int a[20000];
	int num,temp,digit=1,n,i,j;
	scanf("%d",&n);
	a[0] = 1;//��1 ��ʼ��
	digit = 1;//λ����1��ʼ 
	for(i=2;i<=n;i++){
		num=0;
		for(j=0;j<digit;j++){
			temp = i*a[j] + num;  //��λ��� 
			a[j] = temp%10;    //�洢��λ ���Ӹ�λ��ʼ 
			num  = temp/10;
		}
		while(num){   //������û�д���� 
			a[digit] = num%10;
			num/=10;
			digit++;
		}
	} 
	for(i=digit-1;i>=0;i--){ //������� 
		printf("%d",a[i]);
	}
	printf("\n");
	
	
	return 0;
 } 
