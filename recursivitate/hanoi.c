#include <stdio.h>
#include <stdlib.h>
int d=0,discA,discB,discC;



void hanoi(int n,char a,char b,char c) {
    discA=n;

    if (n==1){
        printf("Mutarea: %d \n muta %c --> %c\n",d,a,b,d++);

}
    else {

        hanoi(n-1,a,c,b);
        printf("Mutarea: %d\n  muta %c --> %c\n",d,a,b,d++);
        hanoi(n-1,c,b,a);
    }

}
int main() {
int n;
char a='A',b='B',c='C';
printf("cate discuri? ");
scanf("%d",&n);
hanoi(n,a,b,c);
printf("numar mutari:%d",d);
return 1;
}
