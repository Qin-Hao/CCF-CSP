/*
 * Author: Qin Hao
 * Date: 2019/09/08
 * IDE: Dev-C++ 5.11
 * Question: http://118.190.20.162/view.page?gpid=T81
*/

#include <stdio.h>

void color_leftover_now(int r, int y, int g, int *k, int *t, long long sum_time)	// time of red, yellow and green, color at this time, the leftover time, the spended time
{
	sum_time %= (r + g + y); 
	if (*k == 1)	// red 
	{
		if (sum_time < *t)	// still red
		{
			*t -= sum_time;
		}
		else if (sum_time < *t + g)	// green
		{
			*k = 3;
			*t = *t + g - sum_time;
		}
		else if (sum_time < *t + g + y)	// yellow
		{
			*k = 2;
			*t = *t + g + y - sum_time;
		}
		else if (sum_time < *t + g + y + r)	// red
		{
			*k = 1;
			*t = *t + g + y + r - sum_time;
		}
	}
	else if (*k == 2)	// yellow
	{
		if (sum_time < *t)	// still yellow
		{
			*t -= sum_time;
		}
		else if (sum_time < *t + r)	// red
		{
			*k = 1;
			*t = *t + r - sum_time;
		}
		else if (sum_time < *t + r + g)	// green
		{
			*k = 3;
			*t = *t + r + g - sum_time;
		}
		else if (sum_time < *t + r + g + y)	// yellow
		{
			*k = 2;
			*t = *t + r + g + y - sum_time;
		}
	}
	else if (*k == 3) // green
	{
		if (sum_time < *t)	// still green
		{
			*t -= sum_time;
		}
		else if (sum_time < *t + y)	// yellow
		{
			*k = 2;
			*t = *t + y - sum_time;
		}
		else if (sum_time < *t + y + r)	// red
		{
			*k = 1;
			*t = *t + y + r - sum_time;
		}
		else if (sum_time < *t + y + r + g)	// green
		{
			*k = 3;
			*t = *t + y + r + g - sum_time;
		}
	}
}

int main()
{
    int r, y, g;	// red, yellow and green
	scanf("%d %d %d", &r, &y, &g);
	
	int n;	// the number of lines
	scanf("%d", &n);
	
	int k, t;	// rhe color and time
	int i;	// counter
	long long sum_time = 0;	// the sum of time to spend
	for (i = 0; i < n; ++i)
	{
		scanf("%d %d", &k, &t);
		
		color_leftover_now(r, y, g, &k, &t, sum_time);
		
		if (k == 0)	// no problem
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
	
	printf("%lld", sum_time);
	
	return 0;
}
