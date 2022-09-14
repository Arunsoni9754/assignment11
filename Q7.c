#include<stdio.h>
void fibo(int);
int main()
{
    int n;
    printf("Enter the number of terms ");
    scanf("%d",&n);
    fibo(n);
}
void fibo(int a)
{
    int i,s=0,t=0,p=1;
    for(i=0;i<=a;i++)
    {
        t=p;
        p=s;
        s=p+t;
        printf("%d ",s);
    }
}
