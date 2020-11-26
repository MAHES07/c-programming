
#include<stdio.h>
int  marks(int n)
{
    if(n<=100||n>=85)
    printf("GRADE A");

    else if(n<=84||n>=70)
    printf("GRADE B");

    else if(n<=69||n>=55)
    printf("GRADE C");

    else if(n<=54||n>=40)
    printf("GRADE D");

    else
    printf("GRADE F");
}
void main()
{
    int a;
    printf("enter marks :\n");
    scanf("%d",&a);
    marks(a);

}
