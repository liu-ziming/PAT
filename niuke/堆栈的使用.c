//��ջ��ʹ��


#include <stdio.h>
#include <string.h>

int stack[1000];
int q=-1;

void push(int x)
{
	if(q==999) ;
	else stack[++q]=x;
}
void pop()
{
	if(q==-1) ;
	else  q--;
}
void ask()
{
	if(q==-1) printf("E\n");
	else printf("%d\n",stack[q]);
}

int main()
{
	int n;
	int i;
	char  order[2];
    int data;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		scanf("%s",order); // ����  �� �ַ������룬�������ַ����룬���ٻس������ĺܶ����� 
		if(order[0] == 'A')  ask();
		else if(order[0] == 'P'){
			scanf("%d",&data);
			push(data);
		}
		else if(order[0] == 'O')  pop();
		
	}
	printf("\n");
	
	return 0;
 } 


