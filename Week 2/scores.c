#include <cs50.h>
#include <stdio.h>

float average(int numbers[], int length);//传递一个数组和它的长度作为参数，返回平均值

int main(void)
{
    const int N = 3;//定义一个常量n，常量是程序执行期间其值不会改变的固定值
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score %d: ", i + 1);
    }

    printf("Average: %.1f\n", average(scores, N));
}

float average(int numbers[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += numbers[i];
    }
    return sum / (float) length;
}

