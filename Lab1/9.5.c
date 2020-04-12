#include<stdio.h>


/*se citesc numerele m<10, 3<n<10 si apoi elementele de tip float ale unei matrici a[m][n]. 
ulterior se va citi un numar 0<k<5 si apoi elementele de tip float ale unui vector v[k].
sa se afiseze toate pozitiile unde vectorulv se gaseste in liniile matricii.*/


void citire(float a[10][10], int m, int n) {
	int i,j;

	if (m < 10 && n < 10 && n>3) {

		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++) {
				printf("Introduceti v[%d][%d]= ", i, j);
				scanf("%f", &a[i][j]);

			}
		}

		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++) {
				printf("%0.1f\t", a[i][j]);
			}
			printf("\n\n");
		}
	}
	else printf("Eroare! Valori invalide\n");
}
	
void citireK(float v[10]) {
	int k,i;
	printf("Introduceti k = ");
	scanf("%d", &k);
	if (k < 5 && k>0) {

		for (i = 0; i < k; i++) {
				printf("Introduceti v[%d]= ", i);
				scanf("%f", &v[i]);

		} //citire

		for (i = 0; i < k; i++) {
				printf("%0.1f\t", v[i]);
		}//afisare
	}
	else printf("Eroare! Valori invalide\n");
}

void egal(float a[10][10], float v[10], int n, int m) {
	int i, j, g, counter = 1, c=0;

	for (i = 0; i < m; i++) {//linie
		for (j = 0; j < n; j++) {
			for (g = 0; g < n; g++) //vector
					if (j == g) {
						if (a[i][j] == v[g])
							c++;
					}
			if (c == n) {
				printf("%d", i);
				c = 0;
				counter = 0;
			}
		}

				}
	if (counter == 1)
		printf("Poh.");
	}


int main() {
	int i, m, n;
	float a[10][10], v[10];

	printf("Introduceti m = ");
	scanf("%d", &m);
	printf("Introduceti n = ");
	scanf("%d", &n);

	citire(a, m, n);
	citireK(v);
	egal(a, v, n, m);

	getch();
	return 0;
}