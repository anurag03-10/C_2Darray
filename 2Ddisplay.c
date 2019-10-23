#include<stdio.h>
void main()
{
 int r,c, b[5][5];
 
 printf("Enter numbers  \n");
  for(r=0;r<5;r++)
  {
   for(c=0;c<5;c++)
   {
     scanf("%d",&b[r][c]);
  }
  } 
 printf("Numbers after insertion are  \n");
 for(r=0;r<5;r++)
  {
   for(c=0;c<5;c++)
    {
     printf("%d\t",b[r][c]);
    }
    printf("\n");
  }
 }    

