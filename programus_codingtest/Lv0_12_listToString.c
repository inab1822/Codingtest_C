#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len�� �迭 arr�� �����Դϴ�.
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* arr[], size_t arr_len) {
 
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer = (char*)malloc((arr_len + 1) * sizeof(char));

    for (int i = 0; i < arr_len; i++)
    {
        answer[i] = *arr[i];
    }
    answer[arr_len] = '\0';
    return answer;
}

int main(void)
{
    int * answers[4];
    size_t arr_len = strlen(answers);
    for (int i = 0; i < 3; i++)
    {
        scanf_s("%c", &answers[i]);
    }
    char result = solution(answers, arr_len);
    printf("%s", result);
    return 0;
}