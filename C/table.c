#include <stdio.h>

int main()
{
    int i, n;
    int a[10];
    printf("Enter a number to generate table: ");
    scanf ("%d" , &n);
    for(i=1; i<=10; i++)
    {
    a[i]=n*i;
    printf("%d\n", a[i]);
    }

    return 0;
}
