#include <stdio.h> 

/*
9.3 Sa se scrie o functie care returneaza 2 valori pe care le citeste de la tastatura, sortate in mod crescator.
*/


typedef struct sortare {
	int mare, mic;
}S;



S ordonare(int a, int b)
{
	S s;
	if (a > b) {
		s.mare = a;
		s.mic = b;
	}
	else {
		s.mare = b;
		s.mic = a;
	}

	return s;
}

S ordonare(int a, int b);

int main()
{
	int a, b;
	S rezultat;

	printf("Dati nr: \n");
	scanf("%d%d", &a, &b);

	rezultat = ordonare(a, b);
	printf("\nNr mai mare e %d si nr mai mic e %d", rezultat.mare, rezultat.mic);


	getch();
	return 0;
}