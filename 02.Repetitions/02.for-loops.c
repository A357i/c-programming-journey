#include <stdio.h>

int main () {

    // for loop = repeats a section of code a limited amount of times
    /* Declare an index , some conditions that we check after each iterration, 
       some weight to increment or decrement our index. */

    for(int i = 10; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}