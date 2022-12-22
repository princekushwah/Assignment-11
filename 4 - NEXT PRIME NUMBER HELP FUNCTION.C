#include<stdio.h>
int fun(int n)
{
    int i,x;
     for(i=n+1;i>0;i++)
    {
        for(x=2;x<i;x++)
        {
            if(i%x==0)
                break;
        }
        if(i==x)
            break;
    }
   return i;
}

int main()
{
    int i,m;
    printf("Enter a number :\n");
    scanf("%d",&m);
    printf("NEXT PRIME NUMBER IS %d",fun(m));
   return 0;
}
