#include <stdio.h>


//
//���� ����
//�� ���� a, b�� �־��� �� ������ ���� ������ ������ ����ϴ� �ڵ带 �ۼ��� ������.
//
//a + b = c
//���ѻ���
//1 �� a, b �� 100

int main_06_printadditionexpression(void) {
    int a;
    int b;
    scanf_s("%d %d", &a, &b);
    printf("%d + %d = %d", a, b, a + b);
    return 0;
}