#include<stdio.h>

 void main()
 {
  int z,num;

  printf("Enter a number : ");
  scanf("%d",&num);

  for(z=2;z<=num;z+=2)
  {
   printf("%d , ", z);
   }

 }