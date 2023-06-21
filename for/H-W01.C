#include<stdio.h>
#include<conio.h>

 void main()
 {
  int i ,total=0;

  clrscr();
  for(i=1;i<=10;i++)
  {
   printf("%d ,",i);
   total+=i;
  }

  printf("\n total value is : %d ",total);

  getch();
 }