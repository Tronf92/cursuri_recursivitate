#include <stdio.h>
#include <stdlib.h>
long fact(int i) {
	long y;
	printf("\n La INTRAEA in apelul recursiv al functiei pentru n=%d",i);
	if (i==0) return 1;
	y=i*fact(i-1);
	printf("\n La IESIREA in apelul recursiv al functiei pentru n=%d valoarea returnata =%d",i,y);
	return y;
}
int main(){
    int n;
    printf("Introduceti un numar natural:");
    scanf("%d",&n);
    printf ("\n factorialul lui %d este:%d",n,fact(n));
    return 0;
}
