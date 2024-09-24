#include <stdio.h> 
int main()
{
    int a,b;
    printf("enter 2 number:");
    scanf("%d%d",&a,&b);
    (a>=b)?(a>b)?printf("a is greater %d",a ):printf("erual"):printf("b is greater %d",b);
    return 0;
}
