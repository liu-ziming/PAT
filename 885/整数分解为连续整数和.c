/*beihang 
�����ֽ������������������ʽ  ��
15=1+2+3+4+5+6
15=4+5+6
15=7+8
ĳЩ�������ֽܷ�Ϊ   ��������  �ĺ�  ��16
���� ��N
��� :��Ӧ�ֽ⣬ÿ���ֽ�ռһ�У�  ���û�о����NONE  

*/

/*˼·��
	��Ϊ������������ Ҳ���ǵȲ����У�  ������͹�ʽ n*(a1+an)/2
	������������  ��ʼ �� ����  ����
	
*/

#include <stdio.h>

int main()
{
	
	int N;
	int i,begin,end;
	while(scanf("%d",&N)!=EOF)
	{
		int have=0; 
		for(begin=1;begin<N;begin++)
			for(end=begin+1;end<N;end++){
				int sum = ((end-begin+1)*(end + begin))/2.0;
				if(sum==N){
					for(i=begin;i<=end;i++)
						printf("%d ",i);
					printf("\n");
					have=1;
				}
			}
		if(have==0) printf("NONE");
	 } 
 } 



 
