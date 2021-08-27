#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday \nChoose one of the day in the weekend: ");
	int c;
	scanf("%d", &c);
	switch(c) {
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		default:
			printf("Something is wrong. Please, try again.");
	}
	return 0;
}
