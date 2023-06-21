#include<stdio.h>

int main()
{
   int a,b;
   int *p1,*p2,*p3;

   printf("Enter a num 1: ");
   scanf("%d",&a);
   printf("Enter a num 2: ");
   scanf("%d",&b);

   p1=&a; 
	p2=&b; 

	 p3=p1;
	 p1=p2;
	 p2=p3;
	 
	printf("\np1 num is :%d",*p1);  
	printf("\np2 num is :%d",*p2);  


}