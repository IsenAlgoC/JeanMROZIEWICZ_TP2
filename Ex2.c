#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main() {
	int a = 0;
	while (a < 1) {
		int valid = 1;
		float haut = 1000;
		float larg = 1000;
		float longe = 1000;
		float k;
		while (haut < 1 || haut > 150 || larg < 1 || larg > 150 || longe < 1 || longe > 150) {
			printf("Entrer les dimension de votre valise en cm:\n");
			scanf_s("%f", &haut);
			scanf_s("%f", &larg);
			scanf_s("%f", &longe);
		}
		if (larg < longe) {
			k = longe;
			longe = larg;
			larg = k;
		}
		if (haut < larg) {
			k = larg;
			larg = haut;
			haut = k;
			if (larg < longe) {
				k = longe;
				longe = larg;
				larg = k;
			}
		}
		if (haut > 55) {
			valid = 0;
		}
		if (larg > 35) {
			valid = 0;
		}
		if (longe > 25) {
			valid = 0;
		}
		if (valid = 0) {
			printf("NON VALID\n");
		}
		else {
			printf("VALID\n");
		}
		printf("si vous voulez continuer tape 0, sinon tape 1:\n");
		scanf_s(" %d", &a);
	}
	return(EXIT_SUCCESS);
}