#include<stdio.h>
int main()
{
    int l,b;
    l=1189;b=841;
   /* A0=l*b
    A1=l/2*b
    A2=(b/2)*(l/2)
    A3=(l/4)*(b/2)
    A4=(b/4)*(l/4)
    A5=(l/8)*(b/4)
    A6=(b/8)*(l/8)
    A7=(l/16)*(b/8)
    A8=(b/16)*(l/16)*/
    printf("size of A0=%dmm*%dmm\n",l,b);
    printf("size of A1=%dmm*%d\n",l/2,b);
    printf("size of A2=%dmm*%dmm\n",b/2,l/2);
    printf("size of A3=%d*%dmm\n", l/4,b/2);
    printf("size of A4=%dmm*%dmm\n", b/4,l/4);
    printf("size of A5=%dmm*%dmm\n", l/8,b/4);
    printf("size of A6=%dmm*%dmm\n", b/8,l/8);
    printf("size of A7=%dmm*%dmm\n",l/16,b/8);
    printf("size of A8=%dmm*%dmm\n",b/16,l/16);    
    return 0;
}
