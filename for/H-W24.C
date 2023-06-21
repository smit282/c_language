#include<stdio.h>
#include<conio.h>

 void main()
 {
  int z,y,x=1;

  clrscr();

  for(z=1;z<=5;z++)
  {
    for(y=1;y<=z;y++)

    {
     printf(" %d ",x);
     x++;
    }
    printf("\n");
  }
  getch();
 }