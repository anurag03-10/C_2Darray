#include<stdio.h>
void main()
{
 int r,s,c,b[3][3],d[3][3];
 
 printf("Enter numbers in matrix  \n");
  for(r=0;r<3;r++)
  {
   for(c=0;c<3;c++)
   {
     scanf("%d",&b[r][c]);
  }
  } 
 
  
  printf("Numbers in matrix  \n");
  for(r=0;r<3;r++)
  {
   for(c=0;c<3;c++)
   {
     printf("%d\t",b[r][c]);
   }
        printf("\n"); 
  } 
 
 printf("The lower elements are \n");
 for(r=0;r<3;r++)
  {
   for(c=0;c<3;c++)
    {
     if(r>=c)
     printf("%d  ",b[r][c]);
    }printf("\n");
   }
 
 }


