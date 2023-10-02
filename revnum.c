#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,f,R;
    printf("Enter the five digit number-");
    scanf("%d", &n);
b=n%10;
n=n/10;
c=n%10;
n=n/10;
d=n%10;
n=n/10;
e=n%10;
n=n/10;
f=n%10;
R=b*10000+c*1000+d*100+e*10+f*1;
printf("Reverse of your given number\n%d", R);
    return 0;
}
