#include<stdio.h>
#include<conio.h>

 void main()
 {
  int z,num;

  clrscr();
  printf("Enter a number : ");
  scanf("%d",&num);

  for(z=0-num;z<=num;z++)
  {
   printf("%d , ", z);
   }

  getch();
 }