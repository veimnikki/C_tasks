#include <stdio.h>
#include <stdlib.h>

int main() {
	int mass[2][3] = {{42, 45, 64},{14, 656, 123}};
	for (int i=0; i<2;i++) {
		for (int j=0; j<3; j++) {
			printf ("%d   ", mass[i][j]);
		}
		printf("\n");
	}
	return 0;
}
