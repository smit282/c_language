#include<stdio.h>
#include<conio.h>

 void main()
 {
  int z,i;

  clrscr();

  for(z=65;z<=90;z++)
  {
   i=z+32;
   printf("%c - %c, ",z,i);
  }

  getch();
 }