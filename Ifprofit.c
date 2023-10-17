#include<stdio.h>
int main()
{
float  s,c,p,l;
printf("Enter selling price and cost price\n");
scanf("%f%f", &s,&c);
    l=c-s;
     p=s-c;

if (s>c)
{
   
    printf("Profit made\n%f",p);
}


 if(s<c)
{
    printf("Loss incurred\n%f",l);
}
 if (s==c)
{
    printf("There is no profit, no loss\n");
}
    
    return 0;
}
