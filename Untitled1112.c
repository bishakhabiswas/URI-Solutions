#include <stdio.h>

int main()
{
    int a,b;

    printf("Enter the values of a and b\n");
    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    (a > b) ? printf("a is greater than b that is %d > %d",
                     a,b)
            : printf("b is greater than a that is %d > %d",
                     b,a);

    return 0;
}
