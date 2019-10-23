#include<stdio.h>
void main()
{
 int r,s=0,c,b[3][3],d[3][3];
 
 printf("Enter numbers in 1st matrix  \n");
  for(r=0;r<3;r++)
  {
   for(c=0;c<3;c++)
   {
     scanf("%d",&b[r][c]);
  }
  } 
 
  
  printf("Numbers in 1st matrix  \n");
  for(r=0;r<3;r++)
  {
   for(c=0;c<3;c++)
   {
     printf("%d\t",b[r][c]);
   }
        printf("\n"); 
  } 
 
 
 for(r=0;r<3;r++)
  {
   for(c=0;c<3;c++)
    {
     if((r==c)||((r+c)==2))
     s=s+b[r][c];
    }
   }
 printf("Sum of diagonals  is  %d",s);
 
 }


