#include <stdio.h>
#include <stdlib.h>
int contor=0,i;

long fibonacci(int n) {

    printf("Fibonacii(%d), si pasul: %d\n",n,n);

	if (n==0) return 0;
	else if (n==1) return 1;
            else{printf("Fibonacii(%d) este %d , si pasul: %d\n",n,(fibonacci(n-1)+fibonacci(n-2)),n,contor++);
                    return (fibonacci(n-1)+fibonacci(n-2));}
}
int main(){
    int n,i;
    printf("Introduceti un numar natural:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    printf ("\n Valoarea functiei fibonacci(%d) este:%d ",i,fibonacci(i));
    return 0;
}
