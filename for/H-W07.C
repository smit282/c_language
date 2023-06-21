#include<stdio.h>
#include<conio.h>

 void main()
 {
  int z,num,x=1;

  clrscr();

  printf("enter a number : ");
  scanf("%d",&num);

   for(z=1;z<=num;z*=2)
   {
    printf("%d ,",x*z);
    x++;
   }


  getch();
 }