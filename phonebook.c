#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Kelly","David","John","Mary","Tom"};
    string numbers[] = {"+1-617-495-1000","+1-617-495-2000","+1-617-495-3000","+1-617-495-4000","+1-617-495-5000"};//电话号码

    string name = get_string("Enter a name: ");

    for(int i = 0; i < 3; i++)
    {
        if(strcmp(names[i], name) == 0)
        {
            printf("Found %s's number: %s\n", name, numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}