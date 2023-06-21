#include<stdio.h>
#include<conio.h>

 void main()
 {
  char z,letter;

  clrscr();
  printf("Enter a alphabet letter :");
  scanf("%c", &letter);

  if(letter<64 || letter>91)
  {
   printf("Enter a valid alphabet letter ");
  }

  for(z=letter;z<=90;z++)
  {
   printf("%c ,",z);
  }

  getch();
 }