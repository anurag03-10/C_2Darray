#include<stdio.h>
void main()
{
 int r,c,s=0,b[3][3],d[3][3];
 
 printf("Enter numbers in matrix A \n");
  for(r=0;r<3;r++)
  {
   for(c=0;c<3;c++)
   {
     scanf("%d",&b[r][c]);
  }
  } 
 printf("Enter numbers in matrix B  \n");
 for(r=0;r<3;r++)
  {
   for(c=0;c<3;c++)
    {
     scanf("%d",&d[r][c]);
    }
  }
  
  printf("Numbers in matrix A are  \n");
  for(r=0;r<3;r++)
  {
   for(c=0;c<3;c++)
   {
     printf("%d\t",b[r][c]);
  }
        printf("\n"); 
  } 
 printf("Numbers in matrix B are  \n");
 for(r=0;r<3;r++)
  {
   for(c=0;c<3;c++)
    {
     printf("%d\t",d[r][c]);
    }
   printf("\n");  
  }
  
printf("Matrix after Substraction of B from A is \n");
 for(r=0;r<3;r++)
  {
   for(c=0;c<3;c++)
    {
     b[r][c]-=d[r][c];     
    }
   }
for(r=0;r<3;r++)
  {
   for(c=0;c<3;c++)
    {
     printf("%d\t",b[r][c]);     
    }
   
printf("\n");
   }
}



