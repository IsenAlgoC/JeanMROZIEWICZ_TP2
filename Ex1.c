#include <stdlib.h>;
#include <stdio.h>;
#include <math.h>;

main() {
	
	//int somme2=0;
	unsigned short int n = 1000;
	unsigned short int somme = 0;
	int depasement=0;
	while (n > 361) {
		printf("Entrez la valeur de n pour laquelle vous voulez calculer la somme des n premiers entiers non nuls ? :\n");
		scanf_s("%hu", &n);
	}


	for (int i = 0; i <= n; i++) {
		
		somme += i;
		//if (somme < somme2) {
		//	depasement = i-1;
		//}
		//somme2 = somme;
	}

	//int i = 0;
	//while(i <= n){
	//	somme += i;
	//	i++;
	//}

	//int i = 0;
	//do{
	//	somme += i;
	//	i++;
	//}while(i <= n);
	
	//printf("%d",depasement);
	printf("La somme des %d premiers entiers positifs est egale a %d\n", n, somme);
	return(EXIT_SUCCESS);
}