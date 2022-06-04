#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	int q = 0, w = 0, e = 0;
	scanf("%d%d", &x1, &y1);
	scanf("%d%d", &x2, &y2);
	q = (int)pow((x1 - x2), 2);
	w = (int)pow((y1 - y2), 2);
	e = q + w;
	printf("%d\n", e);
	return 0;
}