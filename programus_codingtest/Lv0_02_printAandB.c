#include <stdio.h>

//문제 설명
//정수 a와 b가 주어집니다.
//각 수를 입력받아 입출력 예와 같은 형식으로 
//출력하는 코드를 작성해 보세요.

//제한사항
//- 100, 000 ≤ a, b ≤ 100, 000

int main_02_printAandB(void) {
    int a;
    int b;
    scanf_s("%d %d", &a, &b);
    printf("a = %d\nb = %d", a, b);
    return 0;
}

// scanf_s를 쓸 때 문자나 문자열에서는 입력받을 크기를 인자로 넣어줘야하지만,
// int, float, double과 같은 자료형은 크기가 일정하기 때문에 안 적어도 된다.
