/*
1-28. 编程，打印下列乘法九九表。
          1  2  3  4  5  6  7  8  9
         ----------------------------
                                 81  
                              86 72
                           49 56 63
                        36 42 48 54
                     25 30 35 40 45
                  16 20 24 28 32 36
                9 14 15 18 21 24 27
             4  6  8 10 12 14 16 18
          1  2  3  4  5  6  7  8  9
*/
#include<stdio.h>

void main()
{
	int i,j;
	for(i=0;i<9;++i)
	    printf("%3d",i+1);
	printf("\n");
	for(i=0;i<9;++i)
	    printf("---");
	printf("\n");
	for(i=9;i>=1;--i)
	{
		for(j=1;j<i;++j)
	        printf("   ");
		for(j=i;j<=9;++j)
	        printf("%3d",i*j);
	    printf("\n");
	}

}

