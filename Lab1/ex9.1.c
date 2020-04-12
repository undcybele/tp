#include <stdio.h>
#include <stdlib.h>

//9.1 se cere un numar impar n>4. Sa se deseneze cifra 8, scris ca un patrat cu o linie orizontala in mijloc, in asa fel incat pe verticala si pe orizontala sa fie cate n stelute. In program nu vor fi admise duplicari de cod.
void cifra8(int n){
int i,j;
for(i=0;i<n;i++){
    for(j = 0; j<=n;j++){
        if(i==0 || i == n-1 || j == 0 || j==n-1)
        printf("* ");
        else printf("  ");
    }
}

}


int main()
{
int n;
printf("n=");
scanf("%d", &n);
  cifra8(n);
  return 0;
}
