#include<stdio.h>
#include <stdlib.h>
struct BitCard {
	unsigned face : 4;
	unsigned suit : 2;
	unsigned color : 1;
};
int main() {
 struct BitCard b1;
 unsigned i;
 printf(" Dimensiunea pentru  tipul Bitcard este=%d\n",sizeof(b1));
 printf(" Dimensiunea pentru  un  camp unsigned a tipul Bitcard este=%d\n",sizeof(i));
 b1.face=10;
 b1.suit=5;
 b1.color=10;
 printf(" Primul camp a lui b1 tipul Bitcard este=%x\n",b1.face);
i=b1.suit;
printf(" Al doilea camp a lui b1 de tipul Bitcard este=%x\n",i);
printf(" Al treilea camp a lui b1 de tipul Bitcard este=%x\n",b1.color);
}
