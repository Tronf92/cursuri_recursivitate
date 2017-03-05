#include <stdio.h>
#include <stdlib.h>


//functia fact definita recursiv
// calculeaza factorialul unui numar intreg
// parametrii:
//    i - numarul intreg pentru care se va calcula factorialul
//    nivel - un indicator al nivelului de recursivitate (ințial are valoarea 0)
long fact(int i, int nivel) {
    // numarApeluri - o variabilă statica care va fi incrementata la fiecare apel
    static int numarApeluri = 0;
    int j;
    long k;
    numarApeluri ++;
    // pentru fiecare nivel de apel se va tipări un tabulator
    for (j = 0; j <nivel; j++){
        printf("  ");
    }
    printf("%d. fact(%d, %d) s-a apelat\n", numarApeluri, i, nivel);
    if (i==0) {
        for (j = 0; j <nivel; j++){
            printf("  ");
        }
        printf("%d. fact(%d, %d) a returnat valoarea 1\n", numarApeluri, i, nivel);
        return 1;
    }
    k = i*fact(i-1, nivel+1);
    for (j = 0; j <nivel; j++){
        printf("  ");
    }
    printf("%d. fact(%d, %d) a returnat valoarea %ld\n", numarApeluri, i, nivel, k);
    return k;
}

int main(){
    int n;
    printf("Introduceti un numar natural:");
    scanf("%d",&n);
    printf ("factorialul lui %d este:%ld\n",n,fact(n, 0));
    return 0;
}


