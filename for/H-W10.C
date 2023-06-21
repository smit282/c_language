#include<stdio.h>
#include<conio.h>

 void main()
 {
  float z,num,x=0.5;

  clrscr();

  printf("enter a number : ");
  scanf("%f",&num);
  printf("%f,",x);

  for(z=0.5;z<=num;z++)
  {
   x+=z;
   printf("%f,",x);
  }


  getch();
 }