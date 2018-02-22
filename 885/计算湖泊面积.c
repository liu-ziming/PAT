/*beihang
求小岛面积
样例输入：
6
111111
110001
100010
110111
010100
111111

输出：
8

*/
/*
思路  ：先记录 出现1的坐标位置，记录i行的最左和最右坐标，记录j列的
最上和最下坐标  
  再遍历一次，对  0 进行判断是否在  记录值的中间
  
  */
  
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main()
{
	int land[100][100];
	int area=0; 
	int ans[100][4];//记录坐标 ， 每行四个位置记录 i行和i列的数据 
	memset(ans,-1,100*4*sizeof(int));
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&land[i][j]);
	
	//生成记录坐标
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(land[i][j]==1){
				if(ans[i][0]==-1) ans[i][0]=j;//i行最左边的1
				if(ans[j][0]==-1) ans[j][2]=i;//j列最上的1
				ans[i][1]=j;//最右 
				ans[j][3]=i;//最下 
			}
		}
	//检测0是否在内陆
	 for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(land[i][j]==0){
				if(i>ans[i][0]&&i<ans[i][1]&&j>ans[j][2]&&j<ans[j][3])
					area++;
			}
		}
	
	printf("%d",area);

}
 
 
