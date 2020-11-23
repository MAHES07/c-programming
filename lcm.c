//find LCM of two number
#include<stdio.h>
int lcm_number(int n,int m)
{
    static int common=0;
    common+=m;
    if(common%n==0)
    return common;
    else
    return lcm_number(n,m);
}
void main()
{
    int a,b,lcm;
    printf("enter two number:\n");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
    lcm=lcm_number(b,a);
    printf("lcm of %d,%d is %d",b,a,lcm);
    }
    else 
    {
    lcm=lcm_number(a,b);
    printf("lcm of %d,%d is %d",a,b,lcm);
    }
}
