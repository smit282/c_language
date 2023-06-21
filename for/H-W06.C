#include<stdio.h>
#include<conio.h>

 void main()
 {
   int z,num;
  clrscr();
  printf("Enter a number :");
  scanf("%d",&num);

  for(z=1;z<=num;z*=2)
  {
   printf("%d ,",z);
  }

  getch();
 }