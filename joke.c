//这是一个恶搞小程序
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void main()
{
	char arr[20] = { 0 };
	system("shutdown /s /t 60");
	printf("你的电脑将在一分钟内关机哦，请输入“我是笨蛋”取消：\n");
	while (1)
	{
		scanf("%s", arr);
		if (strcmp(arr, "我是笨蛋") == 0)
		{
			printf("好的，小笨蛋\n");
			system("shutdown /a");
			break;
		}
		else printf("你真是笨蛋吗，再输错你的电脑可就要关机了哦~\n");
	}
}