/*  //����
1007. �����Բ��� (20)
ʱ������
400 ms
�ڴ�����
65536 kB
���볤������
8000 B
�������
Standard
����
CHEN, Yue

�����Ƕ��� dn Ϊ��dn = p_n+1 - p_n������ pi �ǵ�i����������Ȼ�� d1=1 �Ҷ���n>1�� dn ��ż�����������Բ��롱��Ϊ�����������������Ҳ�Ϊ2����������

�ָ�������������N (< 105)������㲻����N���������������Եĸ�����

�����ʽ��ÿ�������������1����������������������N��

�����ʽ��ÿ���������������ռһ�У�������N���������������Եĸ�����
����������

20

���������

4

*/
#include <iostream>
using namespace std;

bool isprime(int a) {
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    int cnt = 0;
    for (int i = 5; i <= N; i++) {
        if (isprime(i-2) && isprime(i))
            cnt++;
    }
    cout << cnt;
    return 0;
}



 
