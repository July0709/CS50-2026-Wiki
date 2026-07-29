# include<cs50.h>
# include<stdio.h>
# include<string.h>//header library

int main(void)
{
    int numbers[] = {20,500,10,5,100,1,50};//编译器可以自动计算数组的长度
    
    int n = get_int("Enter a number: ");
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found %i at index %i\n", n, i);
            return 0;
        }
    }
    printf("%i not found in the array\n", n);

}

int main(void)
{
    string strings[] = {"battleship","boot","cannon","iron","thimble","top hat"};
    string s = get_string("Enter a string: ");
    for (int i = 0; i < 6 ; i++)
    {
        if(strcmp(strings[i], s) //不能用两个连等号去比较两个字符串，strcmp()函数可以比较两个字符串是否相等
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("%s not found in the array\n", s);
    return 1;
}

