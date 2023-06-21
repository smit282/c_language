#include<stdio.h>
#include<conio.h>

 void main()
 {
   int total=0,z,num;
  clrscr();
  printf("Enter a number :");
  scanf("%d",&num);

  for(z=0;z<=num;z+=2)
  {
   printf("%d ,",z);
   total+=z;
  }

  printf("\n total value is : %d",total );

  getch();
 }