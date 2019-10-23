#include<stdio.h>
void main()
{
 int r,c,s=0,b[3][3],d[3][3];
 
 printf("Enter numbers in 1st matrix  \n");
  for(r=0;r<3;r++)
  {
   for(c=0;c<3;c++)
   {
     scanf("%d",&b[r][c]);
  }
  } 
 printf("Enter numbers in 2nd matrix  \n");
 for(r=0;r<3;r++)
  {
   for(c=0;c<3;c++)
    {
     scanf("%d",&d[r][c]);
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
 printf("Numbers in 2nd matrix are  \n");
 for(r=0;r<3;r++)
  {
   for(c=0;c<3;c++)
    {
     printf("%d\t",d[r][c]);
    }
   printf("\n");  
  }
  
printf("Matrix after addition is \n");
 for(r=0;r<3;r++)
  {
   for(c=0;c<3;c++)
    {
     d[r][c]+=b[r][c];     
    }
   }
for(r=0;r<3;r++)
  {
   for(c=0;c<3;c++)
    {
     printf("%d\t",d[r][c]);     
    }
   
printf("\n");
   }
}



