#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])//argc是可以包含的参数的数量，argv变量中的零位置会自动包含该程序的名称，第一位永远是程序的名称
{
    printf("Hello, %s\n", argv[1]);
}

