#include<stdio.h>
#include<conio.h>

 void main()
 {
  int z,y;

  clrscr();

  for(z=5;z>=1;z--)
  {
    for(y=5;y>=z;y--)

    {
     printf(" %d ",z);

    }
    printf("\n");
  }
  getch();
 }