#include<stdio.h>
#include <stdlib.h>
union alpha {
	char c[5];
	short i;
	long j;
};
int main() {
 union alpha x;
 strcpy(x.c,"ABCD");
 printf(" Componentea c a uniunii este=%s\n",x.c);
 printf(" Componenta i a uniunii este =%d\n",x.i);
 printf(" Componenta i a uniunii in hexa este =%x\n",x.i);
 printf(" Componenta j a uniunii este =%ld\n",x.j);
 printf(" Componenta j a uniunii in hexa este =%x\n",x.j);
 printf(" Dimensiunea  uniunii este=%d\n",sizeof(x));
printf(" Dimensiunea  componentei c uniunii este=%d\n",sizeof(x.c));
printf(" Dimensiunea  componentei i uniunii este=%d\n",sizeof(x.i));
printf(" Dimensiunea  componentei j uniunii este=%d\n",sizeof(x.j));
 return 1;
}
