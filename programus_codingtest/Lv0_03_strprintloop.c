#include <stdio.h>
#define LEN_INPUT 11


//���� ����
//���ڿ� str�� ���� n�� �־����ϴ�.
//str�� n�� �ݺ��� ���ڿ��� ����� ����ϴ� �ڵ带 �ۼ��� ������.
//
//���ѻ���
//1 �� str�� ���� �� 10
//1 �� n �� 5


int main_03_strprintloop(void) {
    char s1[LEN_INPUT];
    int a;
    scanf_s("%s %d", s1, sizeof(s1), & a);
    for (int i = 0; i < a; i++)
    {
        printf("%s", s1);
    }
    return 0;
}