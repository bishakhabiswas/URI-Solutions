#include<stdio.h>
int main()
{
    float R;
    double volume;
    scanf("%f",&R);
    volume = (4.0/3)*3.14159*(R*R*R);
    printf("VOLUME = %.3lf\n",volume);
    return 0;
}
