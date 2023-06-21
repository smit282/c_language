#include<stdio.h>
#include<conio.h>

 void main()
 {
  int z,num,x=1;

  clrscr();
  printf("Enetr a number : ");
  scanf("%d",&num);


  for(z=1;z<=num;z++)
  if(z%2==0)
  {
   x=z*z;
   printf(", %d" ,x);
  }
   else
   {
    printf(", %d",z);
   }

    getch();

 }