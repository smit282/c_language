#include<stdio.h>
#include<conio.h>

 void main()
 {
  int z,y,x=65;

  clrscr();

  for(z=1;z<=5;z++)
  {
    for(y=1;y<=5;y++)
     {
       printf( "%c ",x);
       x++;
      }
    printf("\n");
  }
  getch();
 }