#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("What is your name?\n");
    printf("Your name is %lu characters long.\n", strlen(name));
}