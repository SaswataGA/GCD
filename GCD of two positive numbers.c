#include<stdio.h>
int main()
{
    int a,b,x;
    printf("Enter two integer numbers:");
    scanf("%d %d",&a,&b);
    if(a<b)
        x=a;
    else
        x=b;
again:
    if(a%x==0 && b%x==0)
        printf("The GCD of %d and %d is %d",a,b,x);
    else
    {
        x=x-1;
        goto again;

    }

}
