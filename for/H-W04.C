#include<stdio.h>
#include<conio.h>

 void main()
 {
  int z,x,num;

  clrscr();
  printf("Enter a number : ");
  scanf("%d",&num);

  for(z=1;z<=num;z++)
  {
    x=z*z;
    printf(" %d ,",x);

  }

  getch();
 }