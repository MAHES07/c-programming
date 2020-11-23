//check whether a number is prime or not
#include<stdio.h>
int prime_number(int n,int i)
{
    if(i==1)
    return 1;
    else 
    {
        if(n%i==0)
        return 0;
        else
        {
            prime_number(n,i-1);
        }
        
    }
}
void main()
{
    int n,res=0;
    printf("enter a number :\n");
    scanf("%d",&n);
    res=prime_number(n,n/2);
    if(res==1)
    printf("%d is prime number",n);
    else
     printf("%d is prime number",n);
     }
