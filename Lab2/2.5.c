#include <stdio.h>
#define l 25
//matrice unitate cu de rang transpusa

void transpusa(int m1[l][l],  int n, int m) {
	int i, j, m2[l][l];
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++) {
			m2[j][i] = m1[i][j];

		}


	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%d\t", m2[i][j]);
		printf("\n\n");
	}

}


void citire(int m1[l][l], int n, int m) {
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++) {
			printf("Dati m1[%d][%d]=", i, j);
			scanf("%d", &m1[i][j]);
		}
}

void afisare(int m1[l][l], int n, int m) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			printf("%d\t", m1[i][j]);
		printf("\n\n");
	}
}

int main() {
	int m1[l][l], n, m;
	printf("Dati n=");
	scanf("%d", &n);

	printf("Dati n=");
	scanf("%d", &m);

	citire(m1, n, m);
	afisare(m1, n, m);
	transpusa(m1, n, m);


	system("pause");
	return 0;
}
