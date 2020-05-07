#include <cs50.h>
#include <stdio.h>

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
        for (int j = 0; j < (height - i - 1); j++)
        {
            // printing spaces.
            printf("%s", " ");

        }
        for (int k = 0; k < i + 1; k++)
        {
            //printing blocks.
            printf("#");
        }
        printf("\n");
    }
}
