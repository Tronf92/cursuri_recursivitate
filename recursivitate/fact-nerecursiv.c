#include <stdio.h>
#include <stdlib.h>
/* factorial nercursiv */
int main(){
    int n,i;
    long fact=1;
    printf("Introduceti pe n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fact *=i;
    printf ("\n%d! = %d", n,fact);
    return 0;
}

