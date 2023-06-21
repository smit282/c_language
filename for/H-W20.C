#include<stdio.h>
#include<conio.h>

 void main()
 {
  int z,y,a=11;

  clrscr();

  for(z=1;z<=5;z++)
  {
    for(y=1;y<=5;y++)
    {
      printf(" %d ",a++);
    }
    a+=5;
    printf("\n");
  }
  getch();
 }