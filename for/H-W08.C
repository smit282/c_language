#include<stdio.h>
#include<conio.h>

 void main()
 {
  int  z;

  clrscr();

  for(z='A';z<='Z';z++)
  {
   if(z%2==1)
   {
    printf("%c,",z);
   }
  }

  getch();
 }