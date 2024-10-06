#include<stdio.h>
int main() {

    int age;
    printf("what is your age:");
    scanf("%d",&age);

    if (age >= 18) {
     printf("you can vote");
    }
    
    
    else{
    printf("you cant vote");
    }

    
    return 0;
}
