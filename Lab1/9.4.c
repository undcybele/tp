2#include <stdio.h>

/*9.4 sa se scrie un program care citeste un numar n<10 iar apoi citeste 2 vectori v1 si v2 
de cate n elemente de tip int. Pentru citirea elementelor unui vector se foloseste i 
functie citire(v,n). Se va implementa o functie egal(v1,v2,n) care testeaza daca toate 
elementele din v1 sunt egale cu cele din v1 la pozitii corespondente*/


citire(int v[], int n) {
		int i;
		for (i = 0; i < n; i++)
			scanf("%d", &v[i]); //se citeste fiecare element
}

void egal(int v1[],int v2[],int n){
	int i, counter=0;

	for (i = 0; i < n; i++) 
		if (v1[i] == v2[i]) counter++; //se verifica daca sunt egale si se incrementeaza un counter

	if(counter==n) printf("Toate elementele sunt egale!\n");
	else printf("Unele elemente nu sunt egale\n");
}


int main() {
	int v1[20],v2[20],i, n;

	printf("Introdu nr de elemente pentru vector (n<10) = ");
	scanf("%d", &n);
	if (n < 10) {
		citire(v1, n);
		printf("Si acum elementele pentru v2\n");
		citire(v2, n);
	}
	else printf("Eroare!\n");

	egal(v1, v2, n);



	getch();
	return 0;
}