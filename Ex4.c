#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main() {
	int a = 0;
	srand(time(NULL));
	int nombre = rand() % 100;
	int x = 0;
	printf("entré un nombre : ");
	scanf_s("%d", &x);
	while (x != nombre) {
		if (x > nombre) {
			printf("trop grand\n");
		}
		if (x < nombre) {
			printf("trop petit\n");
		}
		scanf_s("%d", &x);
		a = a + 1;
	}
	printf("votre score: %d", a);
	return(EXIT_SUCCESS);
}