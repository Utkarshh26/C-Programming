#include<stdio.h>
//Print a multiplication table of a number entered by a user in pretty form //
/*example
input enter the number 
6
output
table of 6*/

int main()
{ int a,b,c,d,e,f,g,h,i,j,k;
    printf("Enter the number \n",a);
    scanf("%d", &a);
    b=a*1;c=a*2;d=a*3;e=a*4;f=a*5;g=a*6; h=a*7;i=a*8;j=a*9;k=a*10;
    printf("Table of %d\n");
    printf("%d*1=%d\n",a,b);
    printf("%d*2=%d\n",a,c);
    printf("%d*3=%d\n",a,d);
    printf("%d*4=%d\n",a,e);
    printf("%d*5=%d\n",a,f);
    printf("%d*6=%d\n",a,g);
    printf("%d*7=%d\n",a,h);
    printf("%d*8=%d\n",a,i);
    printf("%d*9=%d\n",a,j);
    printf("%d*10=%d\n",a,k);
    

    return 0;
}
