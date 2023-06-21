#include<stdio.h>
#include<conio.h>

void main ()

{

 int i,j;

 clrscr();

 for(i=1;i<=10;i++)
 {
   for(j=1;j<=10;j++){
    if(j==1 || j==10 || i==1 || i==10 )
    {
       printf(" *");
    }
    else{
       printf("  ");
    }
   }
  printf("\n");
 }

 getch();

}