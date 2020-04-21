/*
 * Author: Qin Hao
 * Date: 2019/08/14
 * IDE: Dev-C++ 5.11
 * Question: CSP20190301
 * Input：输入一列数，升序或降序； 第一行是个数，第二行输入数据，用空格隔开；
 * Output： 输出最大值、中位数、最小值，用空格隔开；
 * Other：中位数是小数，则保留一位；整数直接输出；
*/

#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	if (num == 0)
	{
		return 0;
	}

	int p[num];
	int i;
	for (i = 0; i < num; i++)
	{
		scanf("%d", &p[i]);
	}

	int max, min;
	double mid;

	if (p[0] > p[num - 1])	//降序
	{
		max = p[0];
		min = p[num - 1];
	}
	else  //升序
	{
		max = p[num - 1];
		min = p[0];
	}

	if (num % 2 == 0) //偶数，那么中位数就是中间两数的平均值
	{
		mid = (p[num / 2] + p[num / 2 - 1]) / 2.0;
	}
	else //奇数，中位数为中间的一个数
	{
		mid = p[(num - 1) / 2];
	}

	if (mid - (int)mid == 0) //中位数是个整数
	{
		printf("%d %d %d", max, (int)mid, min);
	}
	else //中位数是小数
	{
		printf("%d %.1lf %d", max, mid, min);
	}

	return 0;
}
