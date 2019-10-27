#include <stdio.h>

int addNumbers(const int a, const int b)
{
	return a + b;
}

int main(int argc, char** argv)
{
	printf("Hello, C!\n");
	int a = 5;
	int b = 10;
	printf("%d + %d = %d\n", a,b, a+b);
	return 0;
}
