#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void showMenu() {
    printf("\n========= 简易科学计算器 =========\n");
    printf("用法: [数字] [操作符] [数字]\n");
    printf("操作符说明:\n");
    printf("  + , - , * , /  (基础运算)\n");
    printf("  ^              (次幂, 如 2 ^ 3 = 8)\n");
    printf("  s              (平方根, 第二个数字填0即可)\n");
    printf("  q              (退出程序)\n");
    printf("==================================\n");
    printf("请输入: ");
}

int main() {
    double num1, num2, result;
    char op;

    while (1) {
        showMenu();
        
        // 接收输入：数字 运算符 数字
        if (scanf("%lf %c %lf", &num1, &op, &num2) != 3) {
            if (op == 'q' || op == 'Q') break;
            printf("输入格式错误，请重试。\n");
            fflush(stdin); // 清空输入缓冲区
            continue;
        }

        switch (op) {
            case '+': result = num1 + num2; break;
            case '-': result = num1 - num2; break;
            case '*': result = num1 * num2; break;
            case '/': 
                if (num2 != 0) result = num1 / num2;
                else {
                    printf("错误：除数不能为零！\n");
                    continue;
                }
                break;
            case '^': result = pow(num1, num2); break;
            case 's': 
                if (num1 >= 0) result = sqrt(num1);
                else {
                    printf("错误：负数不能开平方！\n");
                    continue;
                }
                break;
            default:
                printf("无效的操作符 '%c'\n", op);
                continue;
        }

        printf(">>> 结果: %g\n", result);
    }

    printf("计算器已退出。\n");
    return 0;
}