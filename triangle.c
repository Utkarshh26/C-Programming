#include<stdio.h>
#include<math.h>
int main()  
{float a,b,c,AR,B,h;
    printf("Enter the lengths of three sides of triangles\n", a,b,c);
    scanf("%f""%f""%f", &a,&b,&c);
    B=(a+b+c)/2;
    
    AR=sqrt(B*(B-a)*(B-b)*(B-c));
    
    
    printf("Area of triangle=%f" ,AR);


    return 0;
}

