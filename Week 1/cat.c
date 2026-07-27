# include <cs50.h>
# include <stdio.h>

int main(void)
{
    int n;
    while (true)
    {
       n = get_int("What's n?");
       if(n >= 0)
       {
            break;
       }
    }
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}

int main(void)
{
    int n;
    do
    {
        n = get_int("What's n?");
    }
    while(n < 0);

    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}

void meow(int n)
{
    for (int i = 0; i <n; i ++)
    {
        printf("meow\n");
    }
}