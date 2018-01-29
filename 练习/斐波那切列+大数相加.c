//21-小蜜蜂
// 斐波那契数列+大数相加
/*
1-1  1步
1-2  1
1-3  2
1-4  3
1-5  5
1-6  8
符合斐波那切列  
需要注意的是，C语言中所有的类型都不能表示题中的数值，需要用到大数加法。 
用例 1 111
结果 70492524767089125814114
*/ 

#include "stdio.h"  
#include "stdlib.h"  
  
#define N 22                //22位能表示第100个以内的斐波那契数列值  
  
char * Add(char * x1, char * x2);  
void Output(char * y);  
  
int main()  
{  
    int a , b ;  
  
    scanf("%d %d", &a, &b);  
    getchar();  
      
    int count = b - a;  
    int i;  
  
    //y = x1 + x2;  
    char * x1 = (char *)malloc(sizeof(char) * N);  
    char * x2 = (char *)malloc(sizeof(char) * N);  
    char * y = (char *)malloc(sizeof(char) * N);  
  
    //初始化y, x1, x2  
    for (i = 0; i < N; i++)  
    {  
        x1[i] = '\0';  
        x2[i] = '\0';  
        y[i] = '\0';  
    }  
  
    //给x1和x2赋初值  
    x1[0] = '0';    x1[1] = '\0';  
    x2[0] = '1';    x2[1] = '\0';  
  
    //斐波那契数列，叠加  
    for(i = 1; i <= count; i++)  
    {  
        y = Add(x1, x2);  
        x1 = x2;  
        x2 = y;  
    }  
      
    //输出结果  
    Output(y);  
    printf("\n");  
    return 0;   
}  
  
//大数加法函数  
char * Add(char * x1, char * x2)  
{  
    char * y = (char *) malloc(sizeof(char *) * N);  
    int i = 0;  
    int t = 0;              //表示进位  
  
    //实现大数加法，数组前面存的是数值的高位。如123在数组中是{'3','2','1','\0'}  
    //处理相同长度的部分  
    while(x1[i] != '\0' && x2[i] != '\0')  
    {  
        y[i] = (x1[i] - '0' + x2[i] - '0' + t) % 10 + '0';  
        t = (x1[i] - '0' + x2[i] - '0' + t) / 10;  
        i++;  
    }  
    //如果x1比x2长  
    while(x1[i] != '\0')  
    {  
        y[i] = (x1[i] - '0' + t) % 10 + '0';  
        t = (x1[i] - '0' + t) / 10;  
        i++;  
    }  
    //如果x2比x1长  
    while(x2[i] != '\0')  
    {  
        y[i] = (x2[i] - '0' + t) % 10 + '0';  
        t = (x2[i] - '0' + t) / 10;  
        i++;  
    }  
    //如果还有进位  
    if (t == 1)  
    {  
        y[i++] = '1';  
    }  
    y[i] = '\0';  
    return y;  
}  
 
//输出  
void Output(char * y)  
{     
    //先找到\0的位置，然后逆序输出  
    int i = 0;  
    while(y[i] != '\0')  
    {  
        i++;  
    }  
    i--;  
    while(i >= 0)  
    {  
        printf("%d", y[i--] - '0');  
    }  
}  
  
