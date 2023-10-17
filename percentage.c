#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float p;
    printf("Enter your marks in all five subject\n");
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    p=(a+b+c+d+e)/5;
    if (p>=60)
    {
        printf("First division passed");
    }
    else
    {
        if (p>=50)
        {
                printf("Second division passed");
        }
        else
        {
            if (p>=40)
            {
                printf("Third division passed");
            }
            else
            {
                 if (p<=40)
                {
                    printf("Failed");
                }
            }
            
            
        }
        
    }
    
    return 0;
}
