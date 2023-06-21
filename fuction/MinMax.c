#include<stdio.h>

int main ()
{
/*
  int a=9,b=0,c=90,d=1,e=2;

  if(a>b && a>b && a>c && a>d && a>e )
  {
    printf("max num is a :  %d ",a); 
  }
   else if(b>c && b>d && b>e ){
      printf("max num is b : %d",b );
     }
   else if(c>d && c>e ){
      printf("max num is c : %d",c );
     }
   else if(d>e ){
      printf("max num is d : %d",d );
     }
  else
  {
    printf("max num is e :  %d ",e); 
  }

*/

  int num[5]={1,2,3,4,5},i,x;

  //for (i = 0; i < 5; i++)
  //{
    //printf("[%d]Enter a num : ",i);
    //scanf("%d",&num[i]);
  //}

for(i = 0; i < 5; i++)
{
    if(num[0]>num[i])
   {
    printf("\nmax num is a :  (%d) ",num[i]); 
   }
     
   else
   {
	   printf("\nyour num is min : %d",num[i]);
   }



}


}