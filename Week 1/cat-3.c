# include <cs50.h>
# include <stdio.h>

// Prototype
void meow(int times);

int main(void)
{
    int n = get_int("What's n?");
    meow(n);
}

void meow(int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("meow\n");
    }
}
