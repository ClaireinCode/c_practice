#include <cs50.h>
#include <stdio.h>

int main()
{
    string name = get_string("What's my name? ");
    printf("Hello, my name is %s", name);
}