/*beihang
��������
A��Լ��������������1 ������������A  B����ȣ�
֮�͵���B�� B��Լ��֮�͵���A  �����֮Ϊ ����

���� M  N  1<=M<N<=20000 ,�м� һ���ո�ָ� ��
���
	û�з���Ҫ������NONE��  �������ո�ָ�
*/

#include <stdio.h>
int sum(int x)
{
	int i;int sum=0;
	if(x==1) return 0; //����������
	for(i=1;i<x;i++){
		if(x%i==0) sum+=i;
	} 
	return sum;
}
int main()
{
	
	int M,N,i,j,sumA,sumB;
	int flag=0;
	scanf("%d%d",&M,&N);
	for(i=M;i<=N;i++)
		for(j=i+1;j<N;j++)
			if(i!=j){
				sumA=sum(i);
				sumB=sum(j);
				if(sumA==j&&sumB==i){
					printf("%d %d\n",i,j);
					flag=1;
				}
			} 
	if(flag==0) printf("NONE\n");
 } 
