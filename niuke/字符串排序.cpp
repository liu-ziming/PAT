
/* 
每个字符设置一个字符位ch，和一个标志位flag
初始化result的时候，如果不是字母，则填充字符位，并且flag=1
如果是字母，则不填充字符位(留到后面排序后填充)，并且flag=0

排序的时候2个for，分别遵循题目的要求：
外部for实现字母顺序排序 内部for实现输入顺序排序
在向result插入字符的时候，要看当前位的flag是否为0 如果不为0，就向后移动索引
直到为0才开始插入（这样就跳过了初始化的时候填充的特殊符号）。
*/ 
#include <stdio.h>
#include <string.h> 
char s[1000];
char result[1000];
int flag[1000];//标记是否填入字母 
int main()
{
	gets(s);
	int len= strlen(s);
	int i,j;
	for(i=0;i<len;i++){
		if(s[i]>='A'&&s[i]<='Z'||(s[i]>='a'&&s[i]<='z'))
			flag[i]=0;
		else {
			flag[i]=1;
			result[i]=s[i];
		}
	}
	int index =0;//结果数组的下标 
	//外循环管着字母顺序，内循环管着原字符串顺序 
	for(i='A';i<='Z';i++){
		for(j=0;j<len;j++){
			if(s[j]==i||s[j]==i+32){//找到字母，再找存放位置 
				while(flag[index]==1)//index位置已经填入 
					index++;
				result[index] = s[j];
				flag[index]   = 1 ;
			}
		}
	}
	for(i=0;i<len;i++)
		printf("%c",result[i]); 
	
	printf("\n");
	
	return 0;
}
