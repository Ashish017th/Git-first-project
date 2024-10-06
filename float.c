#include<stdio.h>
int main () {
    float a ;
    printf("enter first value:");
    scanf("%f",&a);

    float b ;
    printf("enter second value:");
    scanf("%f",&b);

    float c;
    printf("enter thhird value:");
    scanf("%f",&c);


    float ave ;
    ave = a + b + c/3 ;
    printf("%f",ave);

    return 0 ;
    
}