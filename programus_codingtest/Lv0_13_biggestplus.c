#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution_biggestplus(int a, int b) {

    int answer = 0;  // ������� ������ ������ ���� asnwer
    int an1, an2;  // a ���� b ���� ���ϴ� ���� �ƴ� �ٿ��� ������ ������ ���� an1, bn1
    char ab1[10], ab2[10];  // a ���� b ���� �ٿ��� ���� ��ų ������ ���� ab1, ab2

    sprintf(ab1, "%d%d", a, b);  // ������ ���� a�� b�� �ٿ��� ������ ���� ab1�� ����
    sprintf(ab2, "%d%d", b, a);  // ������ ���� b�� a�� �ٿ��� ������ ���� ab2�� ����
  
    an1 = atoi(ab1); // ������ ���� ab1�� ���������� ��ȯ�� an1�� ����
    an2 = atoi(ab2);// ������ ���� ab2�� ���������� ��ȯ�� an2�� ����

    // if ������ ������ an1�� an2�� ū ���� answer�� �Ҵ�.
    // if(an1>=an2)
    // {
    //     answer = an1;
    // }
    // else if(an1<an2)
    // {
    //     answer = an2;
    // }

    return an1 > an2 ? an1 : an2; // ���� if���� �����ϰ� ���� ��


    // �Ʒ��� �ڵ�� c���� Ǭ ������ ���Ƿ� python���� Ǯ��ҽ��ϴ�.
    /*def solution(a, b) :
        answer = int(max(f"{a}{b}", f"{b}{a}"))
        return answer*/

    // ����� �ڵ� �� ���� ���� �� �ִ�....
}