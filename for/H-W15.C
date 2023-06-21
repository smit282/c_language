#include<stdio.h>
#include<conio.h>

 void main()
 {
  int z,y;

  clrscr();

  for(z=65;z<=69;z++)
  {
    for(y=1;y<=5;y++)
    {
     printf(" %c ",z);

    }
    printf("\n");
  }
  getch();
 }