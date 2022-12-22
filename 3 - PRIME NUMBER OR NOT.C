#include<stdio.h>
int fun(int x)
{
    int i,flag=0;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            flag++;
            break;

        }
    }
    if(flag==0&&x!=1)
        return i;

}
int main()
{
    int x;
    printf("Enter a number \n");
    scanf("%d",&x);
    if(fun(x))
        printf("YES ITS PRIME NUMBER ");
    else
        printf("NO ITS NOT PRIME NUMBER ");
    return 0;
}
