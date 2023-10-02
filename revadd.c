#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,sum=0;
    printf("Enter the five digit number-\n");
    scanf("%d", &n);
    a=n%10;
    sum=sum+a;
    n=n/10;
b=n%10;
sum=sum+b;
n=n/10;
c=n%10;
sum=sum+c;
n=n/10;
d=n%10;
sum=sum+d;
n=n/10;
e=n%10;
sum=sum+e;
printf("Addition of digits of the given number\n%d", sum);
    return 0;
}