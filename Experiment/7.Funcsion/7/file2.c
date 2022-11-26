int GCD(int x, int y)
{
	int i = 1;
	for (; i = x % y; x = y, y = i);
	return y;
}