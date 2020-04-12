#include <stdio.h>

// numere prime: algoritm

void iterativ(int n) {
	
	int i, ok = 0;
   
    for (i = 2; i <= n / 2; ++i) {

	if (n % i == 0) {
            ok = 1;
            break;
        }
    }

	if (ok == 0)
            printf("%d nu este un numar prim \n", n);
    else
            printf("%d e un numar prim \n", n);
}

int recursiv(int n, int i) {

	if (n <= 2) {
		if (n == 2)
			return 0;
		else if (n < 2) return 1;
	}
	if (n % i == 0)
		return 1;
	if (i * i > n)
		return 0;

    return recursiv(n, i + 1); 
}

int main() {
	int n, r;

	printf("Dati un nr = ");
	scanf("%d", &n);

	if (n<=2)
		printf("Numarul nu este prim\n");
	else {
		iterativ(n);
		printf("Rezultat prin recursivitate:\n");
		r = recursiv(n, 2);
		if (r = 0) printf("Numarul nu este prim\n");
		else printf("Numarul este prim\n");


	}


	getch();
	return 0;
}

