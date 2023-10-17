#include<stdio.h>
int main()
{
    int a;
    char m,s;
    printf("Enter the your marital status(M/U),sex(M/F) and age\n");
    scanf("%c %c %d",&m,&s,&a);
    if (m=='M')
    {
        printf("You are elligible for insurance");
    }
   else if (m=='U'&&s=='M'&&a>30)
    {
        printf("You are elligible for insurance");
    }
   else if (m=='U'&&s=='F'&&a>25)
    {
        printf("You are elligible for insurance");
    }
    else
    {
        printf("You are not elligible for insurance");
    }
    
    
    return 0;
}
