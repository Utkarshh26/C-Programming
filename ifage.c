#include<stdio.h>
int main(int argc, char const *argv[])
{
    int r,s,a;
    printf("Enter the age of Ram,Shyam and Ankit\n");
    scanf("%d%d%d",&r,&s,&a);
    if (r<a&&r<s)
    {
        printf("Ram is youngest boy");
    }
    if (s<r&&s<a)
    {
        printf("Shyam is youngest boy");
    }
    if (a<r&&a<s)
    {
        printf("Ankit is the youngest boy");
    }
    
    
     
    return 0;
}
