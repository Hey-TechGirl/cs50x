#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float change;
    int total;
    int coins = 0;

    do
    {
        change = get_float("How much I owen you? ");
    }
    // checking the valid of the input.
    while (change < 0);
    total = round(change * 100);
    // subtract the $25 coins until total smaller than that.
    while (total >= 25)
    {
        total = total - 25;
        coins++;
    }
    // subtract the $10 coins until total smaller than that.
    while (total >= 10)
    {
        total = total - 10;
        coins++;
    }
    // subtract the $5 coins until total smaller than that.
    while (total >= 5)
    {
        total = total - 5;
        coins++;
    }
    // subtract the $1 coins until total equal zero.
    while (total >= 1)
    {
        total = total - 1;
        coins++;
    }
    printf("Number of coins used: %i\n", coins);
}
