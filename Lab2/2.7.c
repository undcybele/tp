#include <stdio.h>
//matrice inmultita



void citire(int a[10][10], int n, int m) {
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++) {
			printf("Dati a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
}

void afisare(int a[10][10], int n, int m) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}

void inmultire(int a[10][10], int b[10][10], int n, int m, int p) {
	int i, j, k, c[10][10], s = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++) {
			for (k = 0; k < p; k++)
				s += a[i][j] * b[j][k];
			c[i][j] = s;
			s = 0;
		}

	afisare(c, n, p);

}

int main() {
	int a[10][10], b[10][10], n, m, p;
	printf("Dati n=");
	scanf("%d", &n);

	printf("Dati m=");
	scanf("%d", &m);

	printf("Dati p=");
	scanf("%d", &p);

	citire(a, n, m);
	afisare(a, n, m);

	citire(b, m, p);
	afisare(b, m, p);

	inmultire(a, b, n, m, p);


	getch();
	return 0;
}
