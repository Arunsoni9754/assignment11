#include<stdio.h>
void series(int);
int main()
{
    int n;
    printf("Enter the number of terms ");
    scanf("%d",&n);
    series(n);
}
void series(int a)
{
    int i,j=1,q,s=0;
    for(i=1;i<=a;i++)
    {
        j=j*i;
        q=j/i;
        s=s+q;

    }
    printf("The sum is %d",s);
}
