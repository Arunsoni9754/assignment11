#include<stdio.h>
int prime(int);
int prime(int i)
{
    int j,l=0;
    for(j=2;j<=i/2;j++)
    {
        if(i%j==0)
        {
            l=1;
            break;
        }
    }
    return l;
}
int main()
{
int n,k;
printf("Enter the number ");
scanf("%d",&n);
k=prime(n);
if(k==0)
{
    printf("This is a prime number");
}
else 
{
  printf("This is not a prime number");  
}
return 0;
}
