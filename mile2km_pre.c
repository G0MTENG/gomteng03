#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int meter;
	
	meter = 0 * 1609;
	printf("0 마일은 %d미터입니다\n", meter);

	meter = 1 * 1609;
	printf("1 마일은 %d미터입니다\n", meter);

	meter = 2 * 1609;
	printf("2 마일은 %d미터입니다\n", meter);
	return 0;
}