#include<stdio.h>
int main()
{
    int A,H,F,T,Fv,Tw,O,s;
    printf("Enter the amount\n");
    scanf("%d", &A );
    H=A/100;
    A=A%100;
    F=A/50;
    A=A%50;
    T=A/10;
    A=A%10;
    Fv=A/5;
    A=A%5;
    Tw=A/2;
    A=A%2;
    O=A/1;
    s=H+F+T+Fv+Tw+O;
    printf("Minimum number of notes\n%d",s);
    return 0;
}
