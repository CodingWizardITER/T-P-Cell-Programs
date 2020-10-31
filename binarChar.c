// Accept a charcater and print its binary equivalent
#include <stdio.h>
int main()
{
    char ch;
    int i, k;
    scanf("%c ", &ch);

    for (i = 7; i > = 0; i--)
    {
        k = 1 << i;
    }

    return 0;
}