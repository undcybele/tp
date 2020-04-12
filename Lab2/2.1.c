#include <stdio.h>

void swap(int *a, int *b) {
	int aux = *a;
	*a = *b;
	*b = aux;
}

void sortare(int v[], int n) {
	int i;
	for (i = 0; i < n; i++)
		if (v[i] % 2 != 0)
			v[i] *= -1;
	for (i = 0; i < n-1; i++)
		if (v[i] > v[i + 1])
			swap(&v[i], &v[i + 1]);
	for (i = 0; i < n; i++)
		if (v[i] < 0)
			v[i] *= -1;
}


void citire(int v[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("Dati v[%d]=", i);
		scanf("%d", &v[i]);
	}
}

void afisare(int v[], int n) {
	int i;
	for (i = 0; i < n; i++)
		printf("%d\t", v[i]);
		printf("\n");

}

int main() {
	int v[110], n;
	printf("Dati n=");
	scanf("%d", &n);

	citire(v, n);
	afisare(v, n);
	sortare(v, n);
	afisare(v, n);

	getch();
	return 0;
}