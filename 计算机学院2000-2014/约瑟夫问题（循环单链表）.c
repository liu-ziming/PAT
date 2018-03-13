/*   约瑟夫问题

4- ：N 个人围成一圈顺序编号，从 1 号开始按 1、2、 3 顺序报数，
 报 3 者退出圈外，其余的人再从 1、2、 3 开始报数，
 报 3 的人再退出圈外，依次类推。
 请按 退出顺序输出每个退出人的原序号。要求使用环行链表编程。 
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
 	//建立头结点
	Person *head;
	head = (Person*)malloc(sizeof(Person));
	head->num = 1;
	head->next =NULL;
	//建立链表
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
	per= head->next;  //per在前q在后 
	q   = head;
	i = 2;  //i 为当前叫的号123
	printf("出对序列为 ：") ;
	while(N)  //N为剩余人数
	{
		if(i%3==0)   //退出一个人 
		{
			printf("%d  ",per->num);
			q->next = per->next;
			per = q->next;
			
			i=1;   //重新从123报数 
			N--;  
		}	i++;
		q = per;
		per = per->next;
	 } 
 	
 	
  } 
 
 
 
 
 
