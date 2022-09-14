#include<stdio.h>
void square(int);
int main()
{
    int n;
    printf("Enter any number ");
    scanf("%d",&n);
    square(n);
    return 0;
}
void square(int a)
{
    int i,s=1;
    s=a*a;
    printf("The square is %d",s);
}
