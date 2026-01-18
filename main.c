#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, array[10], index, j;

    index = 0;

    for (i = 99;; i--)
    {
        if (i % 2 == 0)
        {
            if (i % 3 != 0)
            {
                array[index] = i;
                index++;
            }
        }
        if (index == 10)
        {
            break;
        }
    }
    for (j = 9; j >= 0; j--)
    {
        printf("%d ", array[j]);
    }

    return 0;
}
