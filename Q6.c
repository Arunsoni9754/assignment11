#include<stdio.h>
void primes(int,int);
int main()
{
    int n,x;
    printf("Enter the starting number ");
    scanf("%d",&n);
    printf("Enter the ending number ");
    scanf("%d",&x);
    primes(n,x);
}
void primes(int a,int b)
{
    int i,j,l;
    for(i=a;i<=b;i++)
    { l=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                l++;
            }
        }
        if(l==0)
        {
            printf("%d ",i);
        }
    }
}
