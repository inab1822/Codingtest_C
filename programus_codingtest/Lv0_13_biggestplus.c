#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution_biggestplus(int a, int b) {

    int answer = 0;  // 결과값을 저장할 정수형 변수 asnwer
    int an1, an2;  // a 값과 b 값을 더하는 것이 아닌 붙여서 저장할 정수형 변수 an1, bn1
    char ab1[10], ab2[10];  // a 값과 b 값을 붙여서 저장 시킬 문자형 변수 ab1, ab2

    sprintf(ab1, "%d%d", a, b);  // 정수형 변수 a와 b를 붙여서 문자형 변수 ab1에 저장
    sprintf(ab2, "%d%d", b, a);  // 정수형 변수 b와 a를 붙여서 문자형 변수 ab2에 저장
  
    an1 = atoi(ab1); // 문자형 변수 ab1을 정수형으로 변환해 an1에 저장
    an2 = atoi(ab2);// 문자형 변수 ab2을 정수형으로 변환해 an2에 저장

    // if 문으로 돌려서 an1과 an2중 큰 값을 answer에 할당.
    // if(an1>=an2)
    // {
    //     answer = an1;
    // }
    // else if(an1<an2)
    // {
    //     answer = an2;
    // }

    return an1 > an2 ? an1 : an2; // 위의 if문을 간략하게 만든 것


    // 아래의 코드는 c언어로 푼 문제를 임의로 python으로 풀어보았습니다.
    /*def solution(a, b) :
        answer = int(max(f"{a}{b}", f"{b}{a}"))
        return answer*/

    // 상당히 코드 줄 수를 줄일 수 있다....
}