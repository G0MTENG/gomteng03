#define _CRT_SECURE_NO_WARNINGS
// 반복을 이용한 팩토리얼 구하기
#include <stdio.h>

int main(void)
{
	long fact = 1;
	int i = 1, n;

	printf("정수를 입력하시요: ");
	scanf("%d", &n);

	while (i <= n)
	{
		fact = fact * i;
		i++;
	}

	printf("%d!은 %d입니다.\n", n, fact);	

	return 0;
}
