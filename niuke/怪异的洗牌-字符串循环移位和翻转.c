// ѭ����λ ����
// ��ת�������


#include <stdio.h>
#include <string.h>

void shift(int *s,int len) //���һ��ѭ���ƶ� 
{
	int i;
	int ch=s[len-1];
	for(i=len-1;i>=1;i--){
		s[i]=s[i-1];
	}
	s[0]=ch;
 } 
void flip(int  *s,int len) //��ת���� 
{
	int i,j;
	for(i=0,j=len-1;i<j;i++,j--){
		int  t;
		t=s[i];s[i]=s[j];s[j]=t;
	}
}

int main()
{
	int s[1000],pos[1000];
	int n,k;
	int i,j;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++) s[i-1] = i;
	for(i=0;i<k;i++)
		scanf("%d",&pos[i]);//��λ�Ŀ�ʼλ��
	for(i=0;i<k;i++){
		int f = n-pos[i];//��λ��λ 
		for(j=0;j<f;j++)  shift(s,n);
		//������һ��flip
		flip(s,n/2);
		 
	} 
	for(i=0;i<n;i++){
		if(i!=0)printf(" ");
		printf("%d",s[i]);
	}
	 
	
	return 0;
 } 


