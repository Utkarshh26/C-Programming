#include<stdio.h>
int main()
{
 float a,b,c;
 printf("Enter the all three angle of triangle\n");
 scanf("%f%f%f", &a,&b,&c);
 if (a+b+c==180)
 {
        printf("Triangle is valid");
 }
    else
    {
        printf("Triangle is not valid");
    }
    
    return 0;
}
