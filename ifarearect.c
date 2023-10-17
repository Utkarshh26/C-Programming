/*write a program to find whetheer area of rectangle is greater tha its perimeter*/
#include<stdio.h>
int main()
{
    float l,b,A,P;
    printf("Enter the length and width of rectangle\n");
    scanf("%f%f", &l, &b);
    A=l*b;
    P=2*(l+b);
    if (A>P)
    {
        printf("Area of rectangle is greater than its perimeter");
    }
    else if (A<P)
    {
        printf("Perimeter of rectangle is greater than its area ");
    }
    else
    {
        printf("Area of rectangle is equal to its perimeter");
    }
    
    return 0;
}
