#include <stdio.h>
#define LEN_INPUT 1000001

// ���� ����
// ���ڿ� str�� �־��� ��, str�� ����ϴ� �ڵ带 �ۼ��� ������.

// ���ѻ���
// 1 �� str�� ���� �� 1, 000, 000
// str���� ������ ������, ù° �ٿ� �� �ٷθ� �־����ϴ�.

int main_01_strprint(void) {
    char s1[LEN_INPUT];
    scanf_s("%s", s1,sizeof(s1));
    printf("%s", s1);

    return 0;
}


// scanf �� scanf_s�� ����

/*������ ���Ǵ� scanf�� ������ ������ ũ�⺸�� �� ���� ���� ���ڸ�
���� �� �־� ���ۿ����÷ο쿡 ���ؼ� ����ߴ�.
�̸� �����ϱ� ���� ���� ���� scanf_s �Լ��̴�.
scanf�ʹ� �ٸ��� scanf_s ���� ���ڿ��� ũ�⸦ ���ڷ� �߰��ؼ� �־�����Ѵ�.
��)
scanf("%s",s1) -> scanf_s("%s",s1,sizeof(s1))*/