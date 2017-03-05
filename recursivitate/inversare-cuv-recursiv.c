#include <stdio.h>
#include <stdlib.h>

//functia recursiva care inverseaza n cuvinte citite de la tasatura separate prin spatiu

void reverse(void){
    char c;
    scanf("%c",&c);
    if (c!=' '){
        printf("%c",c);
        reverse();
    }
    printf("%c",c);
}
int main(){
    int n,i;
    printf("Introduceti numarul de cuvinte:");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        reverse();
        printf ("\n");
    }
    return 0;
}


