#include <stdio.h>
//se citesc de la tast m si n, <10. Sa se creeze o matrice in care la fiecare pozitie sa fie max indecsilor acelei pozitii

int maxi(int a, int b) {
	if (a > b) return a;
	return b;
}

void index(int a[10][10], int n, int m) {
	int i,j;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++) {
			a[i][j] = maxi(i, j);
		}

}


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
		for (j = 0; j < m; j++)
			printf("%d\t", a[i][j]);
		printf("\n\n");
	}
}

int main() {
	int a[10][10], n, m;
	printf("Dati n=");
	scanf("%d", &n);

	printf("Dati m=");
	scanf("%d", &m);

	if ((n >= 10) || (m >= 10))
		printf("N si M trebuie sa fie mai mici ca 10");
	else {

		
		index(a, n, m);
		afisare(a, n, m);


	}

	system("pause");
	return 0;
}
