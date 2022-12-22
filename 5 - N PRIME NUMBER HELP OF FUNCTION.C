#include<stdio.h>
void prime(int);
int main()
{
  int m;
  printf("Enter a number : ");
  scanf("%d",&m);
  prime(m);
  return 0;

}

void prime(int m)
{
    int n,i,flag;
   for(n=1;n<=m;n++)
    {
     flag=0;
     for (i=2;i<=n/2;i++)
       {
        if(n%i==0)
  	      {
     	    flag++;
  	        break;
	      }
       }
    if(flag==0 && n!=1 )
	 printf("%d\n",n);
  }
}
