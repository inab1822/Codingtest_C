#include <stdio.h>
#define LEN_INPUT1 11
#define LEN_INPUT2 11

//
//문제 설명
//두 개의 문자열 str1, str2가 공백으로 구분되어 입력으로 주어집니다.
//입출력 예와 같이 str1과 str2을 이어서 출력하는 코드를 작성해 보세요.
//
//제한사항
//1 ≤ str1, str2의 길이 ≤ 10

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