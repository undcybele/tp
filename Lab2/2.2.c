#include <stdio.h>
//matrice unitate cu de rang n

int unitate(int a[10][10], int n) {
	int i, j, ok=0;

	for (i = 0; i < n; i++)	{
		for (j = 0; j < n; j++) {
			if (i == j && a[i][j] != 1) {
				ok = -1;
				break;
			}
			else if (i != j && a[i][j] != 0) {
				ok = -1;
				break;
			}
		}
	}

	if (ok == 0)
	{
		printf("Este matrice unitate\n");
	}
	else
	{
		printf("Nu este matrice unitate\n");
	}

}


void citire(int a[10][10], int n) {
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) {
			printf("Dati a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
}

void afisare(int a[10][10], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}

}

int main() {
	int a[10][10], n;
	printf("Dati n=");
	scanf("%d", &n);

	citire(a, n);
	afisare(a, n);
	unitate(a, n);
	

	getch();
	return 0;
}
