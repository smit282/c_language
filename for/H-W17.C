#include<stdio.h>
#include<conio.h>

 void main()
 {
  int z,y;

  clrscr();

  for(z=1;z<=10;z+=2)
  {
    for(y=1;y<=5;y++)
    {
     printf(" %d ",z);

    }
    printf("\n");
  }
  getch();
 }