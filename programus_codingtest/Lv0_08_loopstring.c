#include <stdio.h>
#define LEN_INPUT 11

//
// ���� ����
// ���ڿ� str�� �־����ϴ�.
// ���ڿ��� �ð�������� 90�� ������ �Ʒ� ����� ���� ���� ����ϴ� �ڵ带 �ۼ��� ������.
//
// ���ѻ���
// 1 �� str�� ���� �� 10
//
// ����� ��
// �Է� #1
//
// abcde
// ��� #1
//
// a
// b
// c
// d
// e

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    for (int i = 0; i < strlen(s1); i++)
    {
        printf("%c\n", s1[i]);
    }

    return 0;
}