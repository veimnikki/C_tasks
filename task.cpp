#include <stdio.h>
#include <stdlib.h>

int main (){
	int n = 6;
	char mas[n];
	int i = 1;
	for (i; i <= n; i++){
		if (i % 3 == 0 && i % 5 == 0) {
			mas[i] = 'k';
		} else if (i % 3 == 0) {
			mas[i] = 'F';
		} else if (i % 5 == 0) {
			mas[i] = 'B';
		} else {
			mas[i] = 'i';
		}
		printf("%c", mas[i]);
	}
	return 0;
}
