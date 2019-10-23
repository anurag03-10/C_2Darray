#include<stdio.h>
void main()
{
 int t=0,r,s=0,c,b[3][3],d[3][3];
 
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
 
printf("Transpose of matrix is \n"); 
 for(c=0;c<3;c++)
  {
     for(r=0;r<3;r++)  
    {
      printf("%d\t",b[r][c]);
    }printf("\n");
   }
   
 for(c=0;c<3;c++)
  {
     for(r=0;r<3;r++)  
    {
      if(b[c][r]==b[r][c])
      t++;
    }
   }
 if(t==9)
 printf("Its a SYMMETRIC MATRIX");
 else
 printf("Its not a SYMMETRIC MATRIX");
 }


