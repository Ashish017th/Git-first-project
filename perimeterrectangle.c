#include<stdio.h>
int main()
{
    int l;
    printf("enter lenght of rectangle:");
    scanf("%d",&l);

    int b;
    printf("enter breadth of rectangle:");
    scanf("%d",&b);

    int p;
    p=2 * (l + b);
    printf("%d",p);

    return 0;
}
