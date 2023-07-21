#include <stdio.h>
#define LEN_INPUT 20

//
//문제 설명
//영어 알파벳으로 이루어진 문자열 str이 주어집니다.
//각 알파벳을 대문자는 소문자로 소문자는 대문자로 변환해서 
//출력하는 코드를 작성해 보세요.
//
//제한사항
//1 ≤ str의 길이 ≤ 20
//str은 알파벳으로 이루어진 문자열입니다.



int main_04_changeloweranduppercase(void) {
    char s1[LEN_INPUT];
    scanf_s("%s", s1, sizeof(s1));
    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
        {
            printf("%c", s1[i] + 32);
        }
        else if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            printf("%c", s1[i] - 32);
        }
    }

    return 0;
}

//
//A 부터 Z 까지 그리고 a 부터 z 까지 아스키 코드로 변환하면
//규칙이 보이는데 알파벳 대문자와 소문자 사이에는 32만큼의 차이가난다.
//그 특성을 이용해 A~Z -> 65 ~ 90 까지인 대문자에 32를 더해
//97 ~ 122 까지 바꾼다. 반대도 32를 빼서 적용시킨다.