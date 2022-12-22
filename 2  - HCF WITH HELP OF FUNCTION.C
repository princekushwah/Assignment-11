#include<stdio.h>
int fun(int x,int y)
{
    int i;
    for(i=x<y?x:y;i>=1;i--)
    {
        if(x%i==0&&y%i==0)
            return i;
    }
}
int main()
{
    int x,y;
    printf("Enter two numbers :");
    scanf("%d%d",&x,&y);
    printf("HCF IS = %d",fun(x,y));
    return 0;

}
