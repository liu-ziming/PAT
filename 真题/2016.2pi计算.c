/*2016.2
2.大概是PI=4-4/3+4/5-4/7+.......+4/4*n-4加和，
要求第n+1项小于输入的精度，输出第n项，和加起来的PI值
*/

    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    int main(){
      float pi=0,i=4,n=1,s=4;
      float jd;
      scanf("%f",&jd);
      while(fabs(i)>=jd)
      {
      	pi+=i;
      	n+=2;
      	s=-s;
      	i=s/n;
	  }
	  printf("pi is : %.6f",pi);
    }




