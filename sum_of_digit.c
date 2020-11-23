#include<stdio.h>
int sum_digit(int n)
{
    if(n==0)
    return 0;
    return n+sum_digit(n-1);
}
void main()
{
    int n,sum=0;
    printf("enter number:\n");
    scanf("%d",&n);
    sum=sum_digit(n);
    printf("%d",sum);
}
