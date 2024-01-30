#include <stdio.h>

int main(void)
{
    int x = 0;
    int y = 5;

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }

    printf("\nDo you agree to the terms and conditions?\n");

    char c = 'Y';

    if (c == 'Y' || c =='y')
    {
        printf("Agreed\n");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("Does not agree\n");
    }
    else
    {
        printf("meow. That doesn't work!\n");
    }
}