#include<stdio.h>


//declare  globale variable

int maths,sci,eng,total; 
float per;

void dis()
{
    printf("\nMaths\tSci\tEnglish\tTotal\tper"); 
    printf("\n%d\t%d\t%d\t%d\t%.2f",maths,sci,eng,total,per);
}

void clac()
{
    total=maths+sci+eng;
    per=(float)total/3;
    dis();
}

void setdata()
{
    printf("Enter Maths marks : ");
    scanf("%d",&maths);
    printf("Enter Sci marks : ");
    scanf("%d",&sci);
    printf("Enter English marks : ");
    scanf("%d",&eng);
    clac();
}


int main()
{
  setdata();
}