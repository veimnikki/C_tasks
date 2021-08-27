#include <stdio.h>
#include <stdlib.h>

void getValue(int *my_pointer) {
	*my_pointer = 1000;
}

int main() {
	int get_value = 5;
	getValue(&get_value);
	printf("Value of variable is: %d\n", get_value);
	return 0;
}
