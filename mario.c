#include <stdio.h>

int get_size(void);
void print_grid(int size);

int main(void)
{
    // // Get size of grid
    // int n;
    // do
    // {
    //     n = 3; // n = get_int("Size: ")
    // } while (n < 1);

    // // Print grid of bricks
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("#");
    //     }
    //     printf("\n");
    // }

    // Get size of grid
    int n = get_size();

    //Print grid of bricks
    print_grid(n);
}

int get_size(void)
{
    int n;
    do
    {
        n = 3; // n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("#");
    }
    printf("\n");
}