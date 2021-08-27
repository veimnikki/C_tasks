#include <stdlib.h>
#include <stdio.h>

int func(int a, int b) {
	int res = 1;
	for (int i = 1; i <= b; i++) {
		res *= a; 	
	}
	return res;
}
	
int main() {
	int a;
	printf("Enter number: ");
	scanf("%d", &a);
	int b;
	printf("Enter second number: ");
	scanf("%d", &b);
	func(a, b);
	return 0;
}
