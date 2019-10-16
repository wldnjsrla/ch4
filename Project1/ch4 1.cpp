#include <stdio.h>

int main()
{
	int a;

	printf("4자리 정수 입력: ");
	scanf_s("%d", &a);
	printf("%10d\n", a);
	printf("%010d\n", a);
	printf("%+010d\n", a);
	printf("%-10d\n", a);
	printf("%10o\n", a);
	printf("%010o\n", a);
	printf("%10x\n", a);
	printf("%0#10x\n", a);

	return 0;
}