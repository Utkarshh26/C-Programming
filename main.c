#include<stdio.h>
int main()
{
    /* code */
    int a,b;
    int s,d,m,di,mo;
    printf("Enter the values\n");
    scanf("%d""%d", &a,&b);
    s=a+b;d=a-b;m=a*b;di=a/b;mo=a%b;
    printf("a+b=%d\n", s);
    printf("a-b=%d\n", d);
    printf("a*b=%d\n", m);
    printf("a/b=%d\n", di);
    printf("a%b=%d\n", mo);

    return 0;
}

