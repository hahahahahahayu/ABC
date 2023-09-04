#include "pch.h"
#include<iostream>
using namespace std;
int GCD(int a, int b) {
	if (a%b == 0) {
		return b;
	}
	else {
		return GCD(b, a%b);
	}
}
int main()
{
	cout << "輸入兩個數" << endl;
	int a, b;
	scanf_s("%d %d", &a, &b);

	int result = GCD(a, b);
	printf("%d\n", result);
	return 0;

	
}
