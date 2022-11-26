int LCM(int x, int y)
{
	int max = 0, step = 0;
	if (x > y)max = step = x;
	else max = step = y;
	for (; max % x != 0 || max % y != 0; max += step);
	return max;
}