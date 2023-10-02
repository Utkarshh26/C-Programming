#include<stdio.h>
int main()
{
    int n,a,b,sum;
    printf("Enter four digit no.\n");
    scanf("%d", &n);
    sum=0;
    a=n%10;
    sum=sum+a;
    b=n/1000;
    sum=sum+b;
    printf("Sum of FirstnLast digit\n%d", sum);
    return 0;
}
