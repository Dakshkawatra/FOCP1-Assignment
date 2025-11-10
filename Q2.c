#include<stdio.h>
int main()
{
    int n1,n2,n3,greater,smaller;
    printf( "enter the n1 :");
    scanf(" %d",&n1);
    printf( "enter the n2 :");
    scanf(" %d",&n2);

    if(n1>n2)
    {
        greater=n1;
        smaller=n2;
    }
    else
    {
        greater=n2;
        smaller=n1;
    }
    while(1)
    {
        n3=greater%smaller;
        if(n3==0)
        {
            printf("HCF of %d and %d=%d",n1,n2,smaller);
            break;
        }
        greater=smaller;
        smaller=n3;
    }
    return 0;
}