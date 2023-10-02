#include<stdio.h>
int main()
{
    float F,C;
    printf("Enter temperature in fahrenheit\n");
    scanf("%f", &F);

    C=5*(F-32)/9;
    printf("Temperture in centigrade=%f",C);
    return 0;
}
