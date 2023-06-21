#include<stdio.h>
#include<conio.h>

 void main()
 {
  int i,k=1,j;

  clrscr();

  for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
     k++;
     if(i%2==0){
	printf(" %c",k+95);
     }
     else{
       printf(" %c",k+63);
     }
    }
    printf("\n");
  }
  getch();
 }