#include <stdio.h>
#define LEN_INPUT 1000001

// 문제 설명
// 문자열 str이 주어질 때, str을 출력하는 코드를 작성해 보세요.

// 제한사항
// 1 ≤ str의 길이 ≤ 1, 000, 000
// str에는 공백이 없으며, 첫째 줄에 한 줄로만 주어집니다.

int main_01_strprint(void) {
    char s1[LEN_INPUT];
    scanf_s("%s", s1,sizeof(s1));
    printf("%s", s1);

    return 0;
}


// scanf 와 scanf_s의 차이

/*기존에 사용되던 scanf는 지정된 버퍼의 크기보다 더 많은 양의 문자를
넣을 수 있어 버퍼오버플로우에 대해서 취약했다.
이를 보완하기 위해 나온 것이 scanf_s 함수이다.
scanf와는 다르게 scanf_s 에는 문자열의 크기를 인자로 추가해서 넣어줘야한다.
예)
scanf("%s",s1) -> scanf_s("%s",s1,sizeof(s1))*/