#include <stdio.h>
#include <time.h>
#include <stdlib.h>
﻿ void menu()
{
    printf("****************************************\n");
    printf("***********1.start     0.exit***********\n");
    printf("****************************************\n");
}

void game()
{
    int guess = 0;
    int x = rand() % 100 + 1;
    printf("请猜一个0到100的数字:\n");
    printf("(游戏过程中随时输入666都可退到游戏开始界面!!!)\n");
    while (1)
    {
        scanf("%d", &guess);
        if (guess == 666)
        {
            printf("返回游戏界面成功!!!\n");
            system("pause");
            system("cls");
            return;
        }
        else if (guess > x)
        {
            printf("太大了\n");
        }
        else if (guess < x)
        {
            printf("太小了\n");
        }
        else
        {
            printf("恭喜你答对了!!!\n");
            system("pause");
            system("cls");
            return;
        }
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int input = 1;
    do
    {
        menu();
        printf("请输入数字确认是否游戏:\n");
        scanf("%d", &input);
        switch (input)
        {
        case 0:
            printf("退出游戏成功!!!\n");
            break;
        case 1:
            game();
            break;
        default:
            printf("选择错误,请重试!!!\n");
            system("pause");
            system("cls");
        }
    } while (input);
    system("pause");
    return 0;
}
