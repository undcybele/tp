#include <stdio.h>
//se citeste n<=10, m<20. program genereaza p matrice
//cu m linii si n coloane pe care-s puse toate numerele 1,2,3,..m*n. Cu pointeri

void generare(int a[10][10], int *n, int *m) {
	int i, j, d=0;
	for (i = 0; i < *m; i++) 
		for (j = 0; j < *n; j++) {
			a[i][j] = d+1;
			d++;
		}
}


void afisare(int a[10][10], int n, int m){
	int i, j;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}


int main() {

	int m, n, a[10][10];
	printf("Dati n = ");
	scanf("%d", &n);

	printf("Dati m = ");
	scanf("%d", &m);

	if (n > 10 || m >= 20)
		printf("Numerele sunt invalide!");
	else {
		generare(a, &n, &m);
		afisare(a, n, m);
			   		 	  	  	   	
	}

	system("pause");
	return 0;
}

