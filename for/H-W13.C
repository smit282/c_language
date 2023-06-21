#include<stdio.h>
#include<conio.h>

 void main()
 {
  int z,y;

  clrscr();

  for(z=5;z>=1;z--)
  {
    for(y=1;y<=5;y++)
    {
     printf(" %d ",z);

    }
    printf("\n");
  }
  getch();
 }