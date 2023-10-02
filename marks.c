#include <stdio.h>

int main()
{
    int M,P,C,E,H,T;
    //100float Per;
printf("Enter the marks otained by student in Maths\n");
scanf("%d", &M);
printf("Enter the marks otained by student in Physics\n");
 scanf("%d", &P);
printf("Enter the marks otained by student in Chemistry\n");
  scanf("%d", &C);
printf("Enter the marks otained by student in English\n");
scanf("%d", &E);
printf("Enter the marks otained by student in Hindi\n");
scanf("%d", &H);
T=M+P+C+E+H;
printf("Total obtained marks=%d",T);
    return 0;
}
