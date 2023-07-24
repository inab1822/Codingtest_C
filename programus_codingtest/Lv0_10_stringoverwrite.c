#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// solution 함수 선언과 정의
// solution 함수는 문자형인 my_string, overwrite_string 과 정수형인 s 변수를 받는다.
char* solution(const char* my_string, const char* overwrite_string, int s)
{
	//my_string과 overwrite_string의 문자열길이를 size_t 형태인 각 변수에 저장.
	size_t my_string_length = strlen(my_string);
	size_t overwrite_string_length = strlen(overwrite_string);

	// 동적할당으로 answer값 정의 이때 할당 사이즈는 my_string_length 변수를 사용한다.
	char* answer = (char*)malloc((my_string_length + 1) * sizeof(char));

	// strcpy를 사용해 my_string의 값을 answer에 할당.
	strcpy(answer, my_string);

	//strncpy를 사용해 answer[s] 부분 부터 overwrite_string의 값을 복사하여 넣는데
	// overwrite_string의 길이만큼만 넣는다.
	strncpy(answer + s, overwrite_string, overwrite_string_length);

	// answer 리턴
	return answer;
}

int main(void)
{
	// 정수형 상수 MAX_LENGTH 변수를 선언하고 1000 값을 넣는다.
	const int MAX_LENGTH = 1000;

	// my_string과 overwrite_string도 동적할당으로 정의한다.
	char* my_string = (char*)malloc(MAX_LENGTH * sizeof(char));
	char* overwrite_string = (char*)malloc(MAX_LENGTH * sizeof(char));

	// 정수형 변수 s 선언
	int s;

	// 사용자 입력값으로 받은 값을 각각
	// my_string, overwrite_string, s 에 넣는다.
	scanf_s("%s %s %d", my_string,sizeof(my_string), overwrite_string,sizeof(overwrite_string), & s);


	// solution 함수를 실행 시켜 나온 return 값을 result 에 넣는다.
	char* result = solution(my_string, overwrite_string, s);

	// result의 값을 출력
	printf("%s\n", result);


	// 동적 할당 시킨 변수를 초기화 시킨다.
	free(my_string);
	free(overwrite_string);
	free(result);
	return 0;
}