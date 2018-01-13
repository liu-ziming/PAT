// 1003. 我要通过

//数学问题 ---找规律

#include <stdio.h>
#include <string.h>

int main()
{
	int T;char str[100];
	scanf("%d",&T);
	getchar();  //注意 输入数字个数之后 有个回车换行
	while(T--)
	{
		gets(str);
		int len = strlen(str);
		int num_p=0,num_t=0,other=0;
		int loc_p=-1,loc_t=-1;
		//遍历一次字符串
		int i;
		for(i=0;i<len;++i)
		{
			if(str[i]=='P')
			{
				num_p++;loc_p=i;
			}
			else if(str[i]=='T')
			{
				num_t++;loc_t=i;
			}
			else if(str[i]!='A')  //other统计的时除了P A T之外的字符 
			    other++;
		 } 
		 
		 if(num_p!=1||num_t!=1||other!=0||(loc_t-loc_p==1))
		{
			printf("NO\n");continue;
		}
		//x y z 的含义分别时 P  T 的左中右部分的字母数
		int x,y,z;
		x = loc_p;y = loc_t-loc_p-1; z = len - loc_t - 1;
		if(z==x+x*(y-1))   //条件2 是 y 等于1 时的情况
		{
			printf("YES\n");
		 } 
		else
		    printf("NO\n");		
		
	 } //while
 } 
