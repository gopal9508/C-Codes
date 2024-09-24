#include <stdio.h> 
int main()
{
    int age;
    input:
           printf("enter your age:");
           scanf("%d" ,&age);
           if (age<=0)
           {
            printf("invalid age! try again \n");
             goto input;
            }
            else 
            printf("your age is %d",age);
            return 0;
}           