#include <stdio.h>
#include <math.h>
void showmenu ()
{
    printf("此计算器由xRaINx独立开发\n");
    printf("计算格式：数字 符号 数字\n");

}
int main()
 {
    double num1;//取双精度浮点数据类型，精度远高于int与float即单精度浮点数据类型
    double num2;
    double result;
    char op;//char 是 Character（字符）的缩写。它是计算机用来存储单个字符（如字母、数字、标点符号或空格）的基本数据类型。

    showmenu ();
    printf("输入要计算的内容： \n");//目标：计算器能够进行混合运算
    scanf("%lf %c %lf",&num1,&op,&num2);
    switch (op) {
            case '+': result = num1 + num2; break;//单引号内应是字符，如果使用'A'则实际存入为数字65，双引号内表示字符串。
            case '-': result = num1 - num2; break;
            case '*': result = num1 * num2; break;
            case '/': 
                if (num2 != 0) result = num1 / num2;
                else {
                    printf("错误：除数不能为零！\n");
                }
            }
        printf("计算结果：%.2f\n", result);
        return 0;
 }
   

 
   

 