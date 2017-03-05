#include <stdio.h>
#include <stdlib.h>
long fact(int i) {
	if (i==0) return 1;
	return i*fact(i-1);
}
int main(){
    int n;
    printf("Introduceti un numar natural:");
    scanf("%d",&n);
    printf ("\n factorialul lui %d este:%d",n,fact(n));
    return 0;
}
