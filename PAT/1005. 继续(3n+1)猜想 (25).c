/* //Hash 散列 
1005. 继续(3n+1)猜想 (25)
时间限制
400 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue

卡拉兹(Callatz)猜想已经在1001中给出了描述。在这个题目里，情况稍微有些复杂。

当我们验证卡拉兹猜想的时候，为了避免重复计算，可以记录下递推过程中遇到的每一个数。例如对n=3进行验证的时候，我们需要计算3、5、8、4、2、1，则当我们对n=5、8、4、2进行验证的时候，就可以直接判定卡拉兹猜想的真伪，而不需要重复计算，因为这4个数已经在验证3的时候遇到过了，我们称5、8、4、2是被3“覆盖”的数。我们称一个数列中的某个数n为“关键数”，如果n不能被数列中的其他数字所覆盖。

现在给定一系列待验证的数字，我们只需要验证其中的几个关键数，就可以不必再重复验证余下的数字。你的任务就是找出这些关键数字，并按从大到小的顺序输出它们。

输入格式：每个测试输入包含1个测试用例，第1行给出一个正整数K(<100)，第2行给出K个互不相同的待验证的正整数n(1<n<=100)的值，数字间用空格隔开。

输出格式：每个测试用例的输出占一行，按从大到小的顺序输出关键数字。数字间用1个空格隔开，但一行中最后一个数字后没有空格。
输入样例：

6
3 5 6 7 8 11

输出样例：

7 6

*/

#include  <stdio.h>
#include <stdlib.h>


int cmp(const void *a, const void *b) 
{ 
//  return(*(int *)a-*(int *)b);  //升序 
    return(*(int *)b-*(int *)a); //降序 
}

int main()
{
	
    int n,i,j,t;
    scanf("%d\n",&n);
    int a[n+1];
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	 qsort(a,n,sizeof(a[0]),cmp);
	
	for(i=0;i<n;i++)
	{
		t=a[i];
		while(t!=1)
		{
			if (t % 2 == 0) {
                t = t / 2;
            } else {
                t = (t * 3 + 1) / 2;			   
	    	}
	    	for(j=0;j<n;j++)
	    	   if(a[j]==t&&i!=j)
	    	      a[j]=9999;     //9999作为一个标记非关键字  ；如果用负数，会数组前面的数改变后面的数为负，导致while进入无限循环 
	    }
    }
    qsort(a,n,sizeof(a[0]),cmp);
    for(i=0;i<n-1;i++)
    {
    	if(a[i]==9999)
    	   continue;
    	printf("%d ",a[i]);
    	
	}
	printf("%d\n",a[n-1]);
    
}










/*


#include <iostream>
#include <algorithm>
using namespace std;

int cmp(int a, int b) {return a > b;}

int main() {
    int n;
    cin >> n;
    int *a = new int [n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int t;
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        t = a[i];
        while (t != 1 && t != 999) {
            if (t % 2 == 0) {
                t = t / 2;
            } else {
                t = (t * 3 + 1) / 2;
            }
            for (int j = 0; j < n; j++) {
                if(t == a[j] && j != i)
                    a[j] = 999;//相同的数字变为999
            }
        }
    }
    sort(a, a + n, cmp);//999排序后到了最前面
    int temp = 0;
    for (int k = n - 1; k >= 0; k--) {
        if (a[k] != 999)//第一个不等于999的下标为temp
            temp = k;
    }
    for (int m = temp; m < n - 1; m++) {
        cout << a[m] << " ";
    }
    cout << a[n - 1];
    delete [] a;
    return 0;
}*/
