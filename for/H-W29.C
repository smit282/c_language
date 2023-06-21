#include<stdio.h>
#include<conio.h>

 void main()
 {
  int z,y,x=65;

  clrscr();

  for(z=65;z<=69;z++)
  {
    for(y=65;y<=z;y++)
    {
      printf(" %c ",x);
      x++;
    }
    printf("\n");
  }
  getch();
 }