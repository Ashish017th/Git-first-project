#include<stdio.h>
int main () {
    int a,r,s=0;
    printf("enter the number:");
    scanf("%d",&a);
    int temp=a;

    while (a > 0)
    {
        r = a % 10;
        s = r + (s * 10);
        a = a / 10;
    }
    if (temp == s){
        printf("palindrome");
    }
    else{
        printf("not");
    }
    return 0;
}