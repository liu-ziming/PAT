/*   Լɪ������

4- ��N ����Χ��һȦ˳���ţ��� 1 �ſ�ʼ�� 1��2�� 3 ˳������
 �� 3 ���˳�Ȧ�⣬��������ٴ� 1��2�� 3 ��ʼ������
 �� 3 �������˳�Ȧ�⣬�������ơ�
 �밴 �˳�˳�����ÿ���˳��˵�ԭ��š�Ҫ��ʹ�û��������̡� 
*/
#include <stdio.h>
#include <malloc.h>
typedef struct person
{
	int num;
	struct person *next;
	
}Person;


 int main()
 {
 	int N;
 	scanf("%d",&N);
 	//����ͷ���
	Person *head;
	head = (Person*)malloc(sizeof(Person));
	head->num = 1;
	head->next =NULL;
	//��������
	int i;
	Person *q=head;
	Person *per;
	for(i=2;i<=N;i++)
	{
		per=(Person*)malloc(sizeof(Person));
		per->num = i;
		per->next =NULL;
		q->next = per;
		q = q->next;
	} 
	q->next = head;
	per= head->next;  //per��ǰq�ں� 
	q   = head;
	i = 2;  //i Ϊ��ǰ�еĺ�123
	printf("��������Ϊ ��") ;
	while(N)  //NΪʣ������
	{
		if(i%3==0)   //�˳�һ���� 
		{
			printf("%d  ",per->num);
			q->next = per->next;
			per = q->next;
			
			i=1;   //���´�123���� 
			N--;  
		}	i++;
		q = per;
		per = per->next;
	 } 
 	
 	
  } 
 
 
 
 
 
