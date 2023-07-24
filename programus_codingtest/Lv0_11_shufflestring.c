#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution_shufflestring(const char* str1, const char* str2) {
    size_t str1_length = strlen(str1);
    // size_t str2_length = strlen(str2);
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer = (char*)malloc((str1_length * 2 + 1) * sizeof(char));

    for (int i = 0; i < str1_length; i++)
    {
        strcpy(answer + i, str1[i]);
        strcpy(answer + i + 1, str2[i]);

    }

    return answer;

}

int main_shufflestring(void) {
	const int MAX_LENGTH = 10;  // �Է� ���� ���ڿ��� �ִ� ����

	char* str1 = (char*)malloc(MAX_LENGTH * sizeof(char));
	char* str2 = (char*)malloc(MAX_LENGTH * sizeof(char));

	scanf_s("%s %s", str1,strlen(str1), str2,strlen(str2));

	

	//���ڿ� ���� �Ҵ� �޸� �ʱ�ȭ
	free(str1);
	free(str2);
	return 0;
}