if (x<y)
{
    printf("x is less than y\n");
}
else if (x>y)
{
    printf("x is greater than y\n");
}
else 
{
    printf("x is equal to y\n");
}

int counter = 0;
counter++;
printf("Counter: %d\n", counter);

for (int i = 0; i < 5; i++)
{
    printf("Iteration: %d\n", i);
}

# include <cs50.h>
# include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree\n");

    if (c == 'y' || c == 'Y' || c == 'Yes')
    {
        printf("Agreed.\n");
    }
    else
    {
        printf("Not agreed.\n");
    }
}