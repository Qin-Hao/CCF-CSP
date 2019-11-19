/*
 * Author: Qin Hao
 * Date: 2019/09/11
 * IDE: Dev-C++ 5.11
 * Question: 118.190.20.162/view.page?gpid=T68
 * Grade: 100
*/

#include <stdio.h>

int main()
{
	int n;	// the number you will input
	scanf("%d", &n);
	
	int num[n];
	
	int i, j;	// counter
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &num[i]);
	}
	
	int min = num[0] - num[1];
	if (min < 0)
	{
		min = - min;
	}
	for (i = 0; i < n; ++i)
	{
		for (j = i + 1; j < n; ++j)
		{
			int temp_min = num[i] - num[j];
			if (temp_min < 0)
			{
				temp_min = -temp_min;
			}
			if (temp_min < min)
			{
				min = temp_min;
			}
		}
	}
	
	printf("%d", min);
	 
	return 0;
}
