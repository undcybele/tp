#include <stdio.h>

void generare(int m[10][10], int x, int y) {
	int i, j, d=1;
	for (i = 0; i < x; i++)
		for (j = 0; j < y; j++) {
			m[i][j] = d;
			d++;
		}
}

void afisare(int m[10][10], int x, int y) {
	int i, j, d = 1;
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++) 
			printf("%d ", m[i][j]);
		printf(" \n");
		}
}

void rotire(int m[10][10], int x, int y) {
	int i, j;
	printf("Matricea dupa rotire la 90 de grade\n");
	for (i = 0; i < x; i++)
	{
		for (j = m - 1; j >= 0; j--)
		{
			printf("%d", m[j][i]);
		}
		printf("\n");
	}



}

int main()
{
	int m[10][10];
	int x, y, i, j;
	printf("Introdu x = ");
	scanf("%d", &x);
	printf("Introdu y = ");
	scanf("%d", &y);
	generare(m, x, y);
	afisare(m, x, y);
	rotire(m, x, y);
	
	getch();
	return 0;

}