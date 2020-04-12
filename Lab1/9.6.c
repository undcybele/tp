#include <stdio.h>

/*cmmdc si 2 nr a&b def recursiv a.i.:
a, a==b
cmmdc(a-b,b), a>b
cmmdc(a,b-a), b>a
*/
int cmmdc(int m, int n);

int main() {
	int a, b, c;
	printf("introdu a = ");
	scanf("%d", &a);
	printf("introdu b = ");
	scanf("%d", &b);


	c = cmmdc(a, b);
	printf("cel mai mare divizor comun este %d", c);
	getch();
	return 0;
}

int cmmdc(int a, int b) {
	if (b == 0) return a;
	if (a > b) return cmmdc(a - b, b);
	if (a < b) return cmmdc(a, b - a);
}