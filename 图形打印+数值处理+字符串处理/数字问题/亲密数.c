/*
 
2-20. 如果整数Ａ的全部因子（包括１，不包括Ａ本身）之和等于Ｂ；且整数Ｂ的全部因子（包括１，不包括Ｂ本身）之和等于Ａ，则将整数Ａ和Ｂ称为亲密数。求3000以内的全部亲密数。
*/
#include<stdio.h>
int main()
{
    int a,i,b,n;
    printf("There are following friendly--numbers pair smaller than 10000:\n");
    for(a=1;a<3000;a++) /*穷举10000以内的全部整数*/
   {
        for(b=0,i=1;i<=a/2;i++) /*计算数a的各因子，各因子之和存放于b*/
            if((a%i)==0) b+=i; /*计算b的各因子，各因子之和存于n*/
        for(n=0,i=1;i<=b/2;i++)
            if((b%i)==0) n+=i;
        if(n==a&&a<b)  //a<b为了避免重复输出 
            printf("%4d..%4d\n",a,b); /*若n=a，则a和b是一对亲密数，输出*/
    }
}
