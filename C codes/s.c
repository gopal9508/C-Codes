#include <stdio.h> 
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    (n%2==0)?printf("num is even"):printf("num is odd");
    return 0;
}