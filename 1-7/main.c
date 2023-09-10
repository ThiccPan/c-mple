// Exercise 1-7. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.

#include <stdio.h>

int main()
{
    int c, spaceCount;

    spaceCount = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            spaceCount++;
            if (spaceCount < 2)
            {
                putchar(c);
            }
            continue;
        }
        
        spaceCount = 0;
        putchar(c);
    }
    printf("space count: %i\n", spaceCount);

    return 0;
}
