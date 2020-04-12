#include <stdio.h>


void citire(int o[10][10], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		printf("\nIntroduceti distantele\n\n");
		for (j = 0; j < n; j++) {
			if (i == j) {
				o[i][j] = 0;
				continue;
			}
			else if(j > i){
				printf("Da distanta pentru orasul %d si orasul %d = ", i, j);
				scanf("%d", &o[i][j]);
			}
			else o[i][j] = 0;
		}

	}
}

void afisare(int o[10][10], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%d  ", o[i][j]);
		printf("\n");
	}
}

int distantaMin(int o[10][10], int n) {
	int i, j, min, k, l;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (j > i) {
				min = o[0][1];
				if (o[i][j] < min) {
					min = o[i][j];
				}
			}
			else continue;
		}

	}
	return min;
}


int main()
{

	int o[10][10], n, d;
	printf("Dati nr de orase = "); scanf("%d", &n);
	citire(o, n);
	afisare(o, n);
	d = distantaMin(o, n);
	printf("Distanta min = %d", d);

	getch();
	return 0;
}