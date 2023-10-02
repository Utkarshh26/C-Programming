#include <stdio.h>

int main()
{
    int p, t;
    float r, Si;
    printf("Enter the value of p, r, t\n");

    scanf("%d\n%f\n%d", &p,&r,&t);
    
         Si = (p*r*t)/100;

         printf("%f\n", Si);

    return 0;
}
