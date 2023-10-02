#include<stdio.h>
int main()
{
    /* code */
float BS,DA,HRA,GS;
printf("Enter Ramesh's basic salary\n");
scanf("%f", &BS);
DA=(40*BS)/100;
HRA=(20*BS)/100;
GS=BS+DA+HRA;
printf("Ramesh's gross salary\n%f",GS);  
    return 0;
}
