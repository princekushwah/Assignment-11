#include<stdio.h>
int fun(int x,int y)
{
    int i;
    for(i=1;i<x*y;i++)
    {
        if(i%x==0&&i%y==0)
        return i;
    }
 }
int main()
{
    int x,y;
    printf("Enter two number :\n");
    scanf("%d%d",&x,&y);
    printf("LCM IS = %d",fun(x,y));
}

