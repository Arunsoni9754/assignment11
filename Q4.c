#include<stdio.h>
int nprime(int);
int main()
{
    int x,n;
    printf("Enter the number ");
    scanf("%d",&x);
    n=nprime(x);

    {
    printf("The next prime number is %d",n);
    }
    return 0;
}
int nprime(int a)
{ int i,j,l;
     for(i=a;i>0;i++)
    {
    l=0;
    
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                l++;
                
            }
        }
        if(l==2)
    return i;
    }
}
