#include <stdio.h>

int main()
{
    float ftemp, ctemp;

    printf("Enter the temperature in Fahrenheit");
    scanf("%f", &ftemp);
    ctemp = (ftemp - 32) * 5 / 9;
    printf("%.2f", ctemp);
    return 0;
}