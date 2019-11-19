/*
 * Author: Qin Hao
 * Date: 2019/09/08
 * IDE: Dev-C++ 5.11
 * Question: http://118.190.20.162/view.page?gpid=T80
*/

#include <stdio.h>

int main()
{
    int r, y, g;	// red, yellow and green
	scanf("%d %d %d", &r, &y, &g);
	
	int n;	// the number of lines
	scanf("%d", &n);
	
	int k, t;	// rhe color and time
	int i;	// counter
	int sum_time = 0;	// the sum of time to spend
	for (i = 0; i < n; ++i)
	{
		scanf("%d %d", &k, &t);
		if (k == 0)	// none
		{
			sum_time += t;
		}
		else if (k == 1)	// red
		{
			sum_time += t;
		}
		else if (k == 2)	// yellow
		{
			sum_time += t + r;
		}
		else if (k == 3)	// green
		{
			// do nothing!
		}
	}
	
	printf("%d", sum_time);
	
	return 0;
}
