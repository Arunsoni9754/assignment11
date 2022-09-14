#include<stdio.h>
int hcf(int,int);
int main()
{
    int m,n;
    printf("Enter the two numbers: ");
    scanf("%d %d",&m,&n);
    int k=hcf(m,n);
    printf("The HCF is %d",k);
    return 0;
}
int hcf(int a,int b)
{
   int i,k=1;
    
    for(i=1;i<=a*b;i++)
    {
        if((i%a==0) && (i%b==0))
        {break;}
    }
    k=a*b/i;
    return k;
}
