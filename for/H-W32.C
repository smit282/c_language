#include<stdio.h>
#include<conio.h>

 void main()


 {
  int i,j,k=65;
  clrscr();

  for(i=1;i<=5;i++)
  {
   for(j=1;j<=i;j++)
   {
    printf(" %c ",k-j+1);
   }
   k++;
   printf("\n");
}

getch();
}