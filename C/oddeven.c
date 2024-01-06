#include <stdio.h>

    int main()
    {
         int a;

    printf("Enter any numbers:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d You have submitted Even Number",a);
    }
    else
    {
        printf("%d You have submitted Odd Number", a);
    }
    }
