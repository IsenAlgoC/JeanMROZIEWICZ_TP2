#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main() {
	int a;
	int b = 0;
	printf("entré une année :");
	scanf_s("%d", &a);
	if (a % 4 == 0) {
		b = 1;
		if (a % 100 == 0) {
			b = 0;
			if (a % 400 == 0) {
				b = 1;
			}
		}
	}
	if (b == 1) {
		printf("bissextile");
	}
	else {
		printf("non-bissextile");
	}
	return(EXIT_SUCCESS);
}