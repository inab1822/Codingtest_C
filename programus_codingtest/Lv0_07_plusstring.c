#include <stdio.h>
#define LEN_INPUT1 11
#define LEN_INPUT2 11

//
//���� ����
//�� ���� ���ڿ� str1, str2�� �������� ���еǾ� �Է����� �־����ϴ�.
//����� ���� ���� str1�� str2�� �̾ ����ϴ� �ڵ带 �ۼ��� ������.
//
//���ѻ���
//1 �� str1, str2�� ���� �� 10

int main_plusstring(void) {
    char s1[LEN_INPUT1];
    char s2[LEN_INPUT2];
    scanf_s("%s %s", s1, sizeof(s1), s2, sizeof(s2));
    for (int i = 0; i < strlen(s1); i++)
    {
        printf("%c", s1[i]);
    }
    for (int i = 0; i < strlen(s2); i++)
    {
        printf("%c", s2[i]);
    }

    return 0;
}