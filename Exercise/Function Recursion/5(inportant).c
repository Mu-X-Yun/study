//����һ�������ݹ����ϰ�⡣
//��дһ������reverse_string(char* string)���ݹ�ʵ�֣����������ַ������ַ��������У�����ʹ��c�������е��ַ�������������
#include <stdio.h>
int my_strlen(char* arr)
{
	int i = 0;
	for (i = 0; arr[i] != '\0'; i++);
	return i;
}
void reverse_string(char* arr)
{
	char m = arr[0];
	int r = my_strlen(arr);
	arr[0] = arr[r - 1];
	arr[r - 1] = '\0';
	if (my_strlen(arr + 1) > 1)
		reverse_string(arr + 1);
	arr[r - 1] = m;
}
int main()
{
	char arr[] = "Helloworld!";
	printf("%s\n", arr);
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}