#include <stdio.h>
#define l 25
//se citeste n<=25 a[25][25]. suma elementelor intregi pare deasupra DP


void suma(int a[l][l], int n) {
	int i,j,s=0;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) {
			if ((a[i][j] % 2 == 0) && j>i)
				s += a[i][j];
		
		}
	printf("Suma = %d", s);
}


void citire(int a[l][l], int n) {
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) {
			printf("Dati a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
}

void afisare(int a[l][l], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}

int main() {
	int a[l][l], n;
	printf("Dati n=");
	scanf("%d", &n);

	citire(a, n);
	afisare(a, n);
	suma(a, n);

	getch();
	return 0;
}
