#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("enter an int:");
    scanf("%d",&n);
    if(n>0)
    {
        do
        {
           fact=fact*n;
           n--; 
        }
         while (n>1);
        }
        printf("fact is %d",fact);
        return 0;
}