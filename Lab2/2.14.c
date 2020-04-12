#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct {
	int nr_ord;
	int v[10];
}prieteni;


void citire(prieteni *pr, int i, int n) {
	int ok = 0, j;
	int b;
	printf("\nDati codul persoanei:");
	scanf("%d", &(pr + i)->nr_ord);


	for (j = 1; j < n; j++) {
		printf("\n dai un prieten:");
		scanf("%d", &(pr + i)->v[j]);
		ok++;
		printf("\nPersoana mai are prieteni:?(1-da  0-nu)");
		scanf("%d", &b);

		if (b == 1) {
			continue;
			ok++;
		}
		else {
			if (ok == 1) printf("persoana %d are un prieten\n", i);
			else printf("\n %d persoana are %d prieteni\n", i, ok);
			return;
			
		}
	}

}

int main() {
	int nr, i;
	prieteni pr[20];
	printf("\nDati numarul de persoane:");
	scanf("%d", &nr);
	for (i = 1; i <= nr; i++)
		citire(pr, i, nr);
	
	getch();
	return 0;
}