#include<stdio.h>
int lcm(int,int);
int main()
{
    int m,n;
    printf("Enter the two numbers: ");
    scanf("%d %d",&m,&n);
    int k=lcm(m,n);
    printf("The LCM is %d",k);
    return 0;
}
int lcm(int a,int b)
{
   int i;
    
    for(i=1;i<=a*b;i++)
    {
        if((i%a==0) && (i%b==0))
        {break;}
    }
    return i;
}
