#include <stdio.h>
#include <math.h>
//matrice patratica cu N*N patrate perfecte

void patratica(int a[25][25], int n) {
	int i, j, d=1;
	for (i = 0; i < n; i++) 
		for (j = 0; j < n; j++) {
			a[i][j] = pow(d, 2);
			d++;
	
	}
}



void afisare(int a[25][25], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}

int main() {
	int a[25][25], n;
	printf("Dati n=");
	scanf("%d", &n);

	patratica(a, n);

	afisare(a, n);


	getch();
	return 0;
}
