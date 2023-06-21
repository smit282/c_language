#include <stdio.h>
#include<conio.h>

int main()

{

 clrscr();

    char letter, small_vowel,capitel_vowel;
    
    printf("Enter your letter : ");
    scanf("%c",&letter);

    small_vowel =((letter == 'a')||(letter == 'e')||(letter == 'i')||(letter == 'o')||(letter == 'u'));

    capitel_vowel =((letter == 'A')||(letter == 'E')||(letter == 'I')||(letter == 'O')||(letter == 'U'));

    if(small_vowel || capitel_vowel )
    {
        printf("\t your letter is vowel [%c]",letter);
    }
    
    else
    {
        printf("\t your letter is consonant [%c]",letter);
    }

   getch();
}