
#include<stdio.h>
int main()
{
    float km, m, ft,inch,cm;
    printf("Enter distance between cities in kilometres\n");
    scanf("%f", &km);
    m=km*1000;
    cm=m*100;
     inch=ft/12;
     ft=cm/2.54;
    printf("Distance in metres=%f\n",m);
    printf("Distance in centimetres=%f\n",cm);
    printf("Distance in inch=%f\n",inch);
    printf("Distance in feets=%f\n",ft);
    return 0;
}
