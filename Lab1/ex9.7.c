#include <stdio.h>
#include <math.h>
/*
folosind functii standard din math.h sa se scrie o funct care primeste
ca parametrii coord reale a 2 puncte (x0y0 x1y1) si returneaza unghiul 
in grade dintre segmentul (x0y0 - x1y1) si axa Ox
*/

double unghiul(int x0, int x1, int y0, int y1) {
	double cos;
	cos = (x1 - x0) / sqrt(pow((x1 - x0),2) + pow((y1 - y0),2));
	return cos;

}

int main() {
	int x0, x1, y0, y1;
	double r;

	printf("Dati x0 = ");
	scanf("%d", &x0);

	printf("Dati x1 = ");
	scanf("%d", &x1);

	printf("Dati y0 = ");
	scanf("%d", &y0);

	printf("Dati y1 = ");
	scanf("%d", &y1);

	r = unghiul(x0, x1, y0, y1);
	printf("Unghiul dintre ox si linie = %lf", r);

	getch();
	return 0;

}