#include "pch.h"
#include <iostream>
using namespace std;
int Factorial(int n) {
	if (n == 0)
		return 1;
	else
		return n * Factorial(n - 1);
}

int main()
{
	int n, Total;
	printf("請輸入數字n:");
	scanf_s("%d", &n);
	Total = Factorial(n);
	printf("n!=%d", Total);
	return 0;
}