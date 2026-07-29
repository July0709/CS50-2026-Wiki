# include <cs50.h>
# include <stdio.h>

void print_columns(int height);//prototype

int main(void)
{
    int h = get_int("Height: ");
    print_columns(h);
}

void print_columns(int height)
{
    for(int i = 0; i < height; i++)
    {
        printf("#\n");
    }
}