// Exercise 1-6. Write a program to count blanks, tabs, and newlines.
#include <stdio.h>
#define LOWEST 0
#define HIGHEST 300
#define INCREMENT 20

int main()
{
    float celcius, fahr;

    for (int i = 0; i <= HIGHEST; i += INCREMENT)
    {
        fahr = i;
        celcius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f | %6.1f\n", fahr, celcius);
    }

    int c, spaceCount, tabCount, lnCount;

    spaceCount = 0;
    tabCount = 0;
    lnCount = 0;

    while ((c = getchar()) != EOF)
    {
        // printf("%i", c);
        if (c == ' ')
            spaceCount++;
        if (c == '\t')
            tabCount++;
        if (c == '\n')
            lnCount++;
        putchar(c);
    }

    printf("space count is %i\ntab count is %i\nline count is %i\n", spaceCount, tabCount, lnCount);
}