#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	printf("enter number: "); 
	scanf("%d", &num);
	int i = 1;
	int k;
	for (i;i<=num;i++){
		k *= i;
	}
	printf("%d", k); 
	return 0;
}
