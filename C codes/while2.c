#include <stdio.h> 
int main()
{
    int a,b;
    char choice;
    do
    {
       printf("enter 2 int:");
       scanf("%d%d",&a,&b);
       printf("sum is %d",a+b);
       printf("\n do you want to repeat(y\n):");
       fflush(stdin);
       scanf("%c",&choice); /* code */
    }
     while (choice=='y');
     return 0;
}
   