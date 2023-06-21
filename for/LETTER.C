#include<stdio.h>
#include<conio.h>

int main ()

{
 clrscr();

  char letter ;

  printf("Enter a letter small or capital :  ");
  scanf("%c",&letter);

  printf("\t your letter is : %c",letter);

   if((letter>=65)&&(letter<=90))
     {
     printf("\n\t your small letter is : %c ",letter+32);
     printf("\n Your letter ASCII value is : %d",letter);
     }

  else if((letter>=97) &&  (letter<=122))
      {
      printf("\n\t your capital letter is :%c",letter-32);
      printf("\n Your letter ASCII value is : %d",letter);
      }
 else
   {
   printf("\n\t [%c] your letter is not alfabate ",letter );
   }



getch();
}

