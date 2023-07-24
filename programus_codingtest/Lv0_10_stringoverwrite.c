#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// solution �Լ� ����� ����
// solution �Լ��� �������� my_string, overwrite_string �� �������� s ������ �޴´�.
char* solution(const char* my_string, const char* overwrite_string, int s)
{
	//my_string�� overwrite_string�� ���ڿ����̸� size_t ������ �� ������ ����.
	size_t my_string_length = strlen(my_string);
	size_t overwrite_string_length = strlen(overwrite_string);

	// �����Ҵ����� answer�� ���� �̶� �Ҵ� ������� my_string_length ������ ����Ѵ�.
	char* answer = (char*)malloc((my_string_length + 1) * sizeof(char));

	// strcpy�� ����� my_string�� ���� answer�� �Ҵ�.
	strcpy(answer, my_string);

	//strncpy�� ����� answer[s] �κ� ���� overwrite_string�� ���� �����Ͽ� �ִµ�
	// overwrite_string�� ���̸�ŭ�� �ִ´�.
	strncpy(answer + s, overwrite_string, overwrite_string_length);

	// answer ����
	return answer;
}

int main(void)
{
	// ������ ��� MAX_LENGTH ������ �����ϰ� 1000 ���� �ִ´�.
	const int MAX_LENGTH = 1000;

	// my_string�� overwrite_string�� �����Ҵ����� �����Ѵ�.
	char* my_string = (char*)malloc(MAX_LENGTH * sizeof(char));
	char* overwrite_string = (char*)malloc(MAX_LENGTH * sizeof(char));

	// ������ ���� s ����
	int s;

	// ����� �Է°����� ���� ���� ����
	// my_string, overwrite_string, s �� �ִ´�.
	scanf_s("%s %s %d", my_string,sizeof(my_string), overwrite_string,sizeof(overwrite_string), & s);


	// solution �Լ��� ���� ���� ���� return ���� result �� �ִ´�.
	char* result = solution(my_string, overwrite_string, s);

	// result�� ���� ���
	printf("%s\n", result);


	// ���� �Ҵ� ��Ų ������ �ʱ�ȭ ��Ų��.
	free(my_string);
	free(overwrite_string);
	free(result);
	return 0;
}