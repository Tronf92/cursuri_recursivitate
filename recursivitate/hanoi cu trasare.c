#include <stdio.h>
#include <stdlib.h>
void hanoi(int n,char a,char b,char c) {
    int i;
    printf("%d", n);
    for (i=0; i<n; i++) putchar(' ');
    printf("hanoi(%d, %c, %c, %c)\n",n, a, b, c );
    if (n==1) {
        printf("%d", n);
        for (i=0; i<n; i++) putchar(' ');
        printf("muta %c --> %c\n",a,b);
    }
    else {
        hanoi(n-1,a,c,b);
        printf("%d", n);
        for (i=0; i<n; i++) putchar(' ');
        printf("muta %c --> %c\n",a,b);
        hanoi(n-1,c,b,a);
    }
}
int main() {
    int n;
    char a='A',b='B',c='C';
    printf("cate discuri? ");
    scanf("%d",&n);
    hanoi(n,a,b,c);
    return 0;
}
