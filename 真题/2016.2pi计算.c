/*2016.2
2.�����PI=4-4/3+4/5-4/7+.......+4/4*n-4�Ӻͣ�
Ҫ���n+1��С������ľ��ȣ������n��ͼ�������PIֵ
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




