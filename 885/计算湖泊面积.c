/*beihang
��С�����
�������룺
6
111111
110001
100010
110111
010100
111111

�����
8

*/
/*
˼·  ���ȼ�¼ ����1������λ�ã���¼i�е�������������꣬��¼j�е�
���Ϻ���������  
  �ٱ���һ�Σ���  0 �����ж��Ƿ���  ��¼ֵ���м�
  
  */
  
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main()
{
	int land[100][100];
	int area=0; 
	int ans[100][4];//��¼���� �� ÿ���ĸ�λ�ü�¼ i�к�i�е����� 
	memset(ans,-1,100*4*sizeof(int));
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&land[i][j]);
	
	//���ɼ�¼����
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(land[i][j]==1){
				if(ans[i][0]==-1) ans[i][0]=j;//i������ߵ�1
				if(ans[j][0]==-1) ans[j][2]=i;//j�����ϵ�1
				ans[i][1]=j;//���� 
				ans[j][3]=i;//���� 
			}
		}
	//���0�Ƿ�����½
	 for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(land[i][j]==0){
				if(i>ans[i][0]&&i<ans[i][1]&&j>ans[j][2]&&j<ans[j][3])
					area++;
			}
		}
	
	printf("%d",area);

}
 
 
