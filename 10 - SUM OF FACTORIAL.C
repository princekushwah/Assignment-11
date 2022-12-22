#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("sum is %d ",fact(n));
}
int fact(int n)
{
    int i,fact=1,sum=0;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=(fact/i)+sum;
    }
    return sum;
}
