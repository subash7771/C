#include <stdio.h>

    int main(){
         int a,b;

    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is Biger",a);
    }
    else if(a<b)
    {
        printf("%d is Biger", b);
    }
    else if(a==b)
    {
        printf("Writen Numbers are Equal");
    }

    }
