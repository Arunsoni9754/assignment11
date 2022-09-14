#include<stdio.h>
void primes(int);
int main()
{
    int n;
    printf("Enter the number of terms ");
    scanf("%d",&n);
    primes(n);
}
void primes(int x)
{
    int i,j,l;
    for(i=2;i<=x;i++)
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
