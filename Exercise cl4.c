//这是随便找的一道练习题。
//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登陆成功，如果三次均输入错误，则退出程序。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void main()
{
	int i = 0;
	char pw[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入password：");
		scanf("%s", pw);
		if (strcmp(pw, "123456") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else printf("登录失败\n");
	}
	if (i == 3)printf("超过三次，退出程序\n");
}