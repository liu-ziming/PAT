//21-С�۷�
// 쳲���������+�������
/*
1-1  1��
1-2  1
1-3  2
1-4  3
1-5  5
1-6  8
����쳲�������  
��Ҫע����ǣ�C���������е����Ͷ����ܱ�ʾ���е���ֵ����Ҫ�õ������ӷ��� 
���� 1 111
��� 70492524767089125814114
*/ 

#include "stdio.h"  
#include "stdlib.h"  
  
#define N 22                //22λ�ܱ�ʾ��100�����ڵ�쳲���������ֵ  
  
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
  
    //��ʼ��y, x1, x2  
    for (i = 0; i < N; i++)  
    {  
        x1[i] = '\0';  
        x2[i] = '\0';  
        y[i] = '\0';  
    }  
  
    //��x1��x2����ֵ  
    x1[0] = '0';    x1[1] = '\0';  
    x2[0] = '1';    x2[1] = '\0';  
  
    //쳲��������У�����  
    for(i = 1; i <= count; i++)  
    {  
        y = Add(x1, x2);  
        x1 = x2;  
        x2 = y;  
    }  
      
    //������  
    Output(y);  
    printf("\n");  
    return 0;   
}  
  
//�����ӷ�����  
char * Add(char * x1, char * x2)  
{  
    char * y = (char *) malloc(sizeof(char *) * N);  
    int i = 0;  
    int t = 0;              //��ʾ��λ  
  
    //ʵ�ִ����ӷ�������ǰ��������ֵ�ĸ�λ����123����������{'3','2','1','\0'}  
    //������ͬ���ȵĲ���  
    while(x1[i] != '\0' && x2[i] != '\0')  
    {  
        y[i] = (x1[i] - '0' + x2[i] - '0' + t) % 10 + '0';  
        t = (x1[i] - '0' + x2[i] - '0' + t) / 10;  
        i++;  
    }  
    //���x1��x2��  
    while(x1[i] != '\0')  
    {  
        y[i] = (x1[i] - '0' + t) % 10 + '0';  
        t = (x1[i] - '0' + t) / 10;  
        i++;  
    }  
    //���x2��x1��  
    while(x2[i] != '\0')  
    {  
        y[i] = (x2[i] - '0' + t) % 10 + '0';  
        t = (x2[i] - '0' + t) / 10;  
        i++;  
    }  
    //������н�λ  
    if (t == 1)  
    {  
        y[i++] = '1';  
    }  
    y[i] = '\0';  
    return y;  
}  
 
//���  
void Output(char * y)  
{     
    //���ҵ�\0��λ�ã�Ȼ���������  
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
  
