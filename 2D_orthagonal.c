#include<stdio.h>
void main()
{
 int f=0,t=0,r,s=0,c,sum=0,g,b[4][4],m[4][4],l[4][4]={0,1,0,0,1,0,0,0,0,0,0,1,0,0,1,0};
 
 printf("Enter numbers in matrix  \n");
  for(r=0;r<4;r++)
  {
   for(c=0;c<4;c++)
   {
     scanf("%d",&b[r][c]);
  }
  } 
 
  
  printf("Numbers in matrix  \n");
  for(r=0;r<4;r++)
  {
   for(c=0;c<4;c++)
   {
     printf("%d\t",b[r][c]);
   }
        printf("\n"); 
  } 
 
printf("Transpose of matrix is \n"); 
 for(c=0;c<4;c++)
  {
     for(r=0;r<4;r++)  
    {
      printf("%d\t",b[r][c]);
    }printf("\n");
   }
   
  for(r=0;r<4;r++)
  {
   for(c=0;c<4;c++)
   {
     for(g=0;g<4;g++)
     {
       sum=sum+(b[r][g]*b[g][c]);
     }     
     m[r][c]=sum;
     sum=0;
  }
 }
 
 for(r=0;r<4;r++)
  {
   for(c=0;c<4;c++)
   {
    if(m[r][c]==l[r][c])
    f++;
   } 
  }
  if(f==9)
  printf("YES IT IS A ORTHAGONAL MATRIX");
  else
  printf("NO IT IS NOT A ORTHAGONAL MATRIX");
 }  
 
