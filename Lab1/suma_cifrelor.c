#include <stdio.h>

/*
suma cifrelor dint-un numar
*/

void iterativ(int a) {
   int t, sum = 0, rest;

   t = a;

   while (t != 0)
   {
      rest = t % 10;
      sum = sum + rest;
      t = t / 10;
   }

   printf("Suma e = %d\n", sum);
}

int recursiv(int a) {

		if (a == 0) return 0;
		return (a % 10 + recursiv(a / 10));

}

int main() {

	int a, r;
	printf("Dati un numar = ");
	scanf("%d", &a);

	iterativ(a);
	r = recursiv(a);
	printf("Suma prin recursivitate e = %d", r);


	getch();
	return 0;
}