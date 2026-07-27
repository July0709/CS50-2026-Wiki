#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name?\n");

    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }
    printf("Length of name: %d\n", n);
}