//����ĳ�̲�ϰ���ߵĵھ��⡣
//��5�����֣�ͳ����Щ�������ж��ٸ����ʡ�����֮����һ�������ո�ָ���
#include <stdio.h>
int main()
{
	char arr[5][100] = { {"Hello world"},{"English for Transportation"}, {"Translate the following sentences into Chinese"}, {"The Position of Women in Malay Families"}, {"Section C"} };
	int count = 0, r = 0, c = 0;
	for (r = 0; r < 5; r++)
	{
		for (c = 0; c < 100; c++)
		{
			while (arr[r][c] >= 'A' && arr[r][c] <= 'Z' || arr[r][c] >= 'a' && arr[r][c] <= 'z')
				c++;
			count++;
			while (arr[r][c] == ' ' || arr[r][c] == '\0')
				c++;
		}
	}
	printf("�����������ܹ���%d������", count);
	return 0;
}