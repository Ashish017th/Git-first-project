#include<stdio.h>
int main()
{
    int i;
    printf("enter your first no.:");
    scanf("%d",&i);
    int n;
    printf("enter your last no.:");
scanf("%d",&n);
int c;
c=1;
while(i<=n)
{
    c=c*i;
 printf("%d\n",c);
    i=i+1;
}
   
return 0;
}