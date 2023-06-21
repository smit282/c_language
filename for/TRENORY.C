#include<stdio.h>
#include<conio.h>

 void main()

 {

  int a,b,c;

  clrscr();

  printf("enetr a :");
  scanf("%d",&a);
  printf("enetr b :");
  scanf("%d",&b);
  printf("enetr c :");
  scanf("%d",&c);

  a>b ? printf( "\n a is largest number "):

  b>c ? printf("\n b is largest number  ") :

  a<c ? printf("\n c is largest number  ") : printf("\n a is largest number ");

  getch();

 }