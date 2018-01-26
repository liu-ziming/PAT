/*9718 整数因子分解

Description

大于1的正整数 n 都可以分解为 n = x1 * x2 * ... * xm 例如：当n=12时，共有8种不同的分解式： 12 = 12 12 = 6*2 12 = 4*3 12 = 3*4 12 = 3*2*2 12 = 2*6 12 = 2*3*2 12 = 2*2*3 对于给定正整数n，计算n共有多少种不同的分解式。

Input

第一行一个正整数n （1<=n<=1000000）
Output

不同的分解式数目
 

Sample Input

12
 

Sample Output

8
 

Hint

此题因子讲顺序的.第一个因子可能是2~n之间的数.
 比如对12而言,第一个因子可能是2,3,4,6,12. 
将第一个因子为2的分解个数,加上第一个因子为3的分解个数,...,直至加到第一个因子为12的分解个数.
 而第一个因子为2的分解个数又是多少呢?是6(因为12/2=6)的分解个数,递归求解! 
 可用“递归”和“备忘录方法”两种方法分别求解，并测试一下效率。
 递归实现整数因子分解的计数。
 假设对正整数n的因子分解计数为solve(n)。 1）
当n=1时，计数加1。 2）当n>1时，对每个因子i，计算solve(n/i)。

=========================
*/

#include "iostream"
#include "algorithm"
#include "fstream"
using namespace std;

/*
h(n)为n的划分数
h(1) = 1
h(2) = 1
h(n) = h(n/2) + h(n/3) + ... + h(n/n)  前提是能被整除
 */

int h[100];

//动态规划
int solve(int n)
{
    h[1] = 1;
    h[2] = 1;
    for(int i=3; i<=n; i++)
        for(int j=2; j<=i; j++)
            if(i%j == 0) //如果j能被i整除
                h[i] += h[i/j];
    return  h[n];
}

//递归
int total = 0;
int recursive(int n)
{
    if(n==1 || n==2)
        return 1;
    for(int i=3; i<=n; i++)
        if(n%i == 0)
            total += recursive(n/i);
    return total;
}

int main()
{
    int n;
    cout << "输入正整数数：";
    cin >> n;
    int count = solve(n);
    cout << "分解式的种数为（动态规划）：";
    cout << count << endl;
    cout << "分解式的种数为（递归）：";
    count = recursive(n);
    cout << count << endl;
    return 0;
} 
