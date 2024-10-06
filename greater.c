#include<stdio.h>
int main()
{
    int a;
    printf("enter a no.:");
    scanf("%d",&a);

    int b;
    printf("enter b no.:");
    scanf("%d",&b);

    if (a > b){
        printf("a is maximum");
    }
    if (b > a){
        printf("b is maximum");
    }

    return 0;
}