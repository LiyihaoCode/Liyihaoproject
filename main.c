#include <stdio.h>

int main() {
    int correct_pass = 1234; // 假设正确密码是 1234
    int input;

    printf("--- 简易密码破解模拟器 ---\n");

    for (int i = 1; i <= 5; i++) {
        printf("\n第 %d 次尝试，请输入 4 位数字密码: ", i);
        scanf("%d", &input);

        if (input == correct_pass) {
            printf("成功！密码正确，已获取系统 Root 权限！\n");
            break; // 重点：猜对了就跳出循环，不用再猜了
        } else {
            printf("警告：密码错误！");
            if (i < 5) {
                printf("还有 %d 次机会。\n", 5 - i);
            }
        }
    }

    if (input != correct_pass) {
        printf("\n由于连续 5 次输入错误，系统已锁定！\n");
    }

    return 0;
}