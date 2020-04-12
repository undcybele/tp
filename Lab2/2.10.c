#include <stdio.h>
//sa se interschimbe elementele de deasupra DP cu cele de desubt



void interschimba(int a[10][10], int *n) {
	int i, j, aux;
	for (i = 0; i < *n; i++)
		for (j = 0; j < *n; j++) {
			if (i > j) {
				aux = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = aux;

			}
		}
}

void citire(int a[10][10], int *n) {
	int i, j;
	for (i = 0; i < *n; i++)
		for (j = 0; j < *n; j++) {
			printf("Dati a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
}

void afisare(int a[10][10], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%d\t", a[i][j]);
		printf("\n\n");
	}
}


int main() {

	int n, a[10][10];
	printf("Dati n = ");
	scanf("%d", &n);

	if (n > 50)
		printf("Numarul e invalid!");
	else {

		citire(a, &n);
		afisare(a, n);
		printf(" \nMatricea inversata cu triunghiurile \n");
		interschimba(a, &n);
		afisare(a, n);








	}

	system("pause");
	return 0;
}

