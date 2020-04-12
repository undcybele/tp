#include <stdio.h>


typedef struct {
	int nr_pr;
	int v[4];
}P;

int citire(P *produse, int nr) {
	int i;
	printf("\n Dati codul produsului:");
	scanf("%d", &(produse + nr)->nr_pr);

	for (i = 0; i < 4; i++)
	{
		printf("Cifra de vanzari:");
		scanf("%d", &(produse + nr)->v[i]);
	}
	return nr;
}

void afisare(P *produse, int nr) {
	int i;
	printf("\n");
	printf("\n%d produs", (produse + nr)->nr_pr);
	printf("\nNumarul de vanzari: ");
	for (i = 0; i < 4; i++)
		printf("\n%d", (produse + nr)->v[i]);
}


void crestere(P *produse, int n) {
	int i, ok = 0;
	for (i = 0; i < 3; i++)
		if ((produse + n)->v[i] < (produse + n)->v[i + 1])
			ok++;
	if (ok == 3)
		afisare(produse, n);
}

int main() {
	P produse[20];
	int n, i, nr = 0;
	printf("\nDati numarul de produse:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		nr = citire(produse, i);

	for (i = 0; i <= nr; i++)
		afisare(produse, i);

	printf("Aceste produse au inregistrat cresteri\n");
	for (i = 0; i <= nr; i++)
		crestere(produse, i);







	getch();
	return 0;
}