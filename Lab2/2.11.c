#include <stdio.h>
//matrice patritica de n vectori pentru suma
//liniilor si suma coloanelor

void citire(int a[20][20], int *n) {
	int i, j;
	for (i = 0; i < *n; i++)
		for (j = 0; j < *n; j++) {
			printf("Dati a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
}

void afisare(int a[20][20], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%d\t", a[i][j]);
		printf("\n\n");
	}
}



void afisVector(int v[20], int *n) {
	int i;
	for (i = 0; i < *n; i++)
		printf("%d ", v[i]);
	printf("\n");


}


void vector(int a[20][20], int v1[20], int v2[20], int n) {
	int i, j, *p1 = v1, *p2 = v2, sL=0, sC=0;

	//suma pe linie
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			sL += a[i][j];
		p1[i] = sL;
		sL = 0;
	
	}

	//suma pe coloana
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			sC += a[j][i];
		p2[i] = sC;
		sC = 0;

	}

	printf("Suma vectorilor pe linie");
	afisVector(p1, &n);
	printf("Suma vectorilor pe coloana");
	afisVector(p2, &n);

}


int main() {
	int n, a[20][20], v1[20], v2[20];

	printf("Dati n = ");
	scanf("%d", &n);

	citire(a, &n);
	afisare(a, n);

	vector(a, v1, v2, n);






	getch();
	return 0;
}
