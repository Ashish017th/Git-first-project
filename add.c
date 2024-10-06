#include <stdio.h>
int main() {    

    int a , b , c;
    printf("enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    if(a < b && b < c) {
        printf("%d,%d,%d",a,b,c);
    }
    else{
        if(b < a && b < c){
            printf("%d,%d,%d",b,a,c);
        }
        else{
            if(c < a && c < b) {
            printf("%d,%d,%d",c,a,b);
        }
        }
        
    }
    return 0 ;
}

    


