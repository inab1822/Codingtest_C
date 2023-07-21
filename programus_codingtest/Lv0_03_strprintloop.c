#include <stdio.h>
#define LEN_INPUT 11


//문제 설명
//문자열 str과 정수 n이 주어집니다.
//str이 n번 반복된 문자열을 만들어 출력하는 코드를 작성해 보세요.
//
//제한사항
//1 ≤ str의 길이 ≤ 10
//1 ≤ n ≤ 5


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