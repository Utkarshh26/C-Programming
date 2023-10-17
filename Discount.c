#include<stdio.h>
int main()
{
 /*Discount of 10% is offered on purchasing more than 100 qty*/   
 int n,d;
 float p,t;
 printf("Enter the qty and price per item\n");
 scanf("%d%f",&n,&p);
 if (n>1000)
 {
    d=10;
 }
 else
 {
    d=0;
 }
     t=(n*p)-(n*p*d)/100.0;
      printf("Total expenses=Rs%f\n",t);
 

    return 0;
}
