#include<stdio.h>

int main()
{
    int i,j;
    for(i=0;i<6;i+=1)
    {
     for(j=0;j<=i;j++)
      {  
       printf("01");
      }
      printf("\t");
    }
    return 0;
}
