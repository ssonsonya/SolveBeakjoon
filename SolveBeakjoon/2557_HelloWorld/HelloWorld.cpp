#include "stdafx.h"
#include "HelloWorld.h"

#include <cstdio>

HelloWorld::HelloWorld()
{
	printf("\n [ 2557 | 입출력과 사칙연산 | Hello World ]\n");
	printf("\n 문제 : Hello World!를 출력하시오.");
	printf("\n 입력 : 없음");
	printf("\n 출력 : Hello World!");
	
	printf("\n -----------------------------------\n");

	Answer();
}

void HelloWorld::Answer()
{
	printf("Hello World!");
}

void HelloWorld::Solution()
{
	printf("\n -----------------------------------");
	printf("\n [ Solution ]\n");
	printf("\n #include <cstdio>");
	printf("\n\n int main() {");
	printf("\n    printf(\"Hello World!\");");
	printf("\n    return 0;");
	printf("\n }");
	printf("\n");
}
