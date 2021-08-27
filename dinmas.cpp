#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Enter size of array: ");
	int a;
	scanf("%d", &a);
	int mas[a];
	int c;
	for (int i = 0; i < a; i++) {
		printf("Enter a value of array: ");
		scanf("%d", &c);
		mas [i] = c;
	}
	printf("[");
	for (int j=0; j<a; j++) {
		if(j != a-1){
		printf("%d; ", mas[j]);
		} else {
			printf("%d]\n", mas[j]);
		}
	}
	int n, d, p;
	printf("If you want to delete one of the value of element in array, press 1\nIf you want to expand array and enter value, press 2\nIf you want to change one of the value, press 3\n");
	scanf("%d", &n);
	switch (n) {
		case 1:
			printf("Please, enter the number of element in array to delete the value and reduce an array: ");
			scanf("%d", &d);
			printf("[");
			for (int i = 0; i < a; i++) {
				if (i != d && i != a-1) {
					printf("%d; ", mas[i]);
				} else if (i != d && i == a-1) {
					printf("%d]", mas[i]);
				}
			}
			break;
		case 2:
			int k;
			printf("Enter the value of element: ");
			scanf("%d", &k);
			mas[a] = k;
			printf("[");
			for (int i = 0; i <= a; i++) {
				if (i != a) {
					printf("%d; ", mas[i]);
				} else if (i == a) {
					printf("%d]", mas[i]);
				}
			}
			break;	
		case 3:
			int q, n;
			printf("Enter the value which you want to change: ");
			scanf("%d", &q);
			printf("Enter the value which you want set instead: ");
			scanf("%d", &n);
			for (int i = 0; i < a; i++) {
				if (mas[i] == q) {
					mas[i] = n;
					printf("[");
					for (int j = 0; j < a; j++) {
						if (j != a-1) {
							printf("%d; ", mas[j]);
						} else if (j == a-1) {
							printf("%d]", mas[j]);
						}
					}
				}
			}
			break;	
		default:
			printf("something is wrong");
			break;
	}
	return 0;
}
