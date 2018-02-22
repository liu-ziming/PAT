// 约瑟夫问题 
//链表法  和  模拟的方法

#include <stdio.h>
#include <stdlib.h>
typedef struct monkey{
	int ID;
	struct monkey *next;
	
}Monkey; 

int main()
{
	Monkey *link,*monkey,*LastMonkey;
	int totalmonkey,stride;
	printf("输入猴子总数和出对数字");
	scanf("%d%d",&totalmonkey,&stride);
	//建立 链表 不带头结点 
	link=NULL;
	int i;
	for(i=0;i<totalmonkey;i++){
		monkey = new monkey;
		monkey->ID = i+1;
		if(link==NULL)//first monkey
			link=LastMonkey=monkey;
		else{
			LastMonkey->next = monkey;
			LastMonkey = monkey;
		}
	} 
	LastMonkey->next = NULL;
	//计算猴子出队顺序
	count = 1;
	printf("\n出对顺序：");
	while(link!=NULL){
		if(link->next=link){
			printf("%4d",link->ID);
			delete link;
			break;//最后一个结点 
		}
		if(count==stride-1){ //找到出队的前一个 
			monkey = link->next;
			link->next=monkey->next;
			printf("%4d",monkey->ID);
			delete monkey;
			count=0;//初始化计数器 
		}
		link=link->next;
		count++; 
	} 
	return 0;
	
}
