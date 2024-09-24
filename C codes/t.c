#include <stdio.h> 
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    (n>=0)?printf("absolute is %d",n):printf("absolute is %d",-n);
    return 0;
}
