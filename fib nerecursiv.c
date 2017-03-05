//Nicorici Adrian, fibonacci nerecursiv

#include <stdio.h>
#include <stdlib.h>

int i,fib[100];//i contor, fib stocarea numarului lui fibonaci

void fibonaci(int n){
    for(i=0;i<=n;i++){
        if(i<2){
            fib[0]=0;
            fib[1]=1;
        }
        else{
            fib[i]=fib[i-1]+fib[i-2];

        }
    }
    printf("%d",fib[n]);
}

int main(){
    int n;
    printf("Introduceti un numar!\n");
    scanf("%d",&n);
    fibonaci(n);
    return 0;
}
