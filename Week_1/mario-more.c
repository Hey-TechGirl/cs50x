#include <stdio.h>
#include<cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    // checking the valid height of the pyramid.
    while (height < 1 || height > 8);
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < 2 * (height + 2); j++)
        {
            if (j == height || i + j < height - 1 || j == height + 1)
            {
                // printing spaces.
                printf("%s", " ");
            }
            else if (j - i <= height + 2)
            {
                //printing blocks.
                printf("#");
            }
        }
        printf("\n");
    }
}
