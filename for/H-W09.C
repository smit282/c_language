#include<stdio.h>
#include<conio.h>

 void main()
 {
  long int z,num,a=0,b=1,c;

  clrscr();

  printf("enter a number : ");
  scanf("%ld",&num);

  for(z=1;z<=num;z++)
  {
    c=a+b;
    a=b;
    b=c;
    printf("%ld ,", a);
  }

  getch();
 }