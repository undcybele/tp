#include <stdio.h>
//matrice adaugata o linie nula

void schimb(int a[26][25], int n, int m) {
	int j;
	for (j = 0; j < m; j++) 
		a[2][j] = 0;
}

void linie(int a[26][25], int n, int m) {
int i,j;
	
	for (i = 2; i < n; i++)
		for (j = 0; j < m; j++) {
			a[n - i + 2][j] = a[n - i + 1][j];
		}
}


void citire(int a[26][25], int n, int m) {
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++) {	
			printf("Dati a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
}

void afisare(int a[26][25], int n, int m) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}

int main() {
	int a[26][25], n, m;
	printf("Dati n=");
	scanf("%d", &n);


	printf("Dati m=");
	scanf("%d", &m);

	citire(a, n, m);
	afisare(a, n, m);
	printf("\n");
	
	n++;
	linie(a, n, m);
	schimb(a, n, m);
	afisare(a, n, m);



	getch();
	return 0;
}
