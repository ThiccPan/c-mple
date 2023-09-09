/* print Fahrenheit-Celsius table
for f = 0, 20, ..., 300 */
#include <stdio.h>

int main()
{
    float lowest, highest, increment;
    lowest = 0;
    highest = 300;
    increment = 20;

    for (int i = 0; i < highest; i+=increment) {
        printf("%i\n", i);
    }
}