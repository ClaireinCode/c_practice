#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    typedef char *string;

    int n = 50;
    // int *p = &n;
    // printf("n: %p\np: %p", &n, p);

    // typedef struct addresses
    // {
    //     string streetName;
    //     string streetType; 
    // };

   char *s = "HIT";
   printf("%p\n%s\n%p\n%p\n%p\n", s, s, &s[0], &s[1], &s[2]);
   printf("%c\n%c\n%c\n", *s, *(s + 1), *(s + 2));
}


//int main(int argc, string argv[])