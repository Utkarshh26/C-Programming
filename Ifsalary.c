#include<stdio.h>
int main()
{
    /*Calculation of gross salary using if else*/
    float BS,HRA,DA,GS;
    printf("Enter your basic salary\n");
    scanf("%f", &BS);
    if (BS<1500)
    {
        HRA=1500; 
        DA=(BS*10)/100;
    }
    else
    {
        HRA=500;
        DA=(BS*98)/100;
    }
    GS=BS+HRA+DA;
    printf("Your gross salary\n%f", GS);
    return 0;
}
