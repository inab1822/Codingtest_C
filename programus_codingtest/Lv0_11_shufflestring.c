#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution_shufflestring(const char* str1, const char* str2) {
    size_t str1_length = strlen(str1);
    // size_t str2_length = strlen(str2);
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc((str1_length * 2 + 1) * sizeof(char));

    for (int i = 0; i < str1_length; i++)
    {
        strcpy(answer + i, str1[i]);
        strcpy(answer + i + 1, str2[i]);

    }

    return answer;

}

int main_shufflestring(void) {
	const int MAX_LENGTH = 10;  // 입력 받을 문자열의 최대 길이

	char* str1 = (char*)malloc(MAX_LENGTH * sizeof(char));
	char* str2 = (char*)malloc(MAX_LENGTH * sizeof(char));

	scanf_s("%s %s", str1,strlen(str1), str2,strlen(str2));

	

	//문자열 동적 할당 메모리 초기화
	free(str1);
	free(str2);
	return 0;
}