/*
 * Author: Qin Hao
 * Date: 2019/09/09
 * IDE: Dev-C++ 5.11
 * Question: http://118.190.20.162/view.page?gpid=T78
 * Grade: 80
*/

#include <stdio.h>

int main()
{
	int n;	// the number of time
	scanf("%d", &n);
	
	int time_a[n * 2];	// time of person a
	int time_b[n * 2];	// time of person b
	
	int i = 0, j = 0, k = 0;	// counter
	for (i = 0; i < n * 2; ++i)
	{
		if (i <= n - 1)	// time a
		{
			scanf("%d %d", &time_a[i * 2], &time_a[i * 2 + 1]);
		}
		else	// time b
		{
			scanf("%d %d", &time_b[(i - n) * 2], &time_b[(i - n) * 2 + 1]);
		}
	}

	long long chat_time = 0;	// chat with others

	int length = (time_a[2 * n - 1] >= time_b[2 * n - 1]) ? time_a[2 * n - 1] : time_b[2 * n - 1];
	int chat[length];
	for (i = 0; i < length; ++i)
	{
		chat[i] = 0;
		//printf("init\n");
	}
	
	for (i = 0; i < 2 * n - 1; i = i + 2)
	{
		for (j = time_a[i]; j < time_a[i + 1]; ++j)
		{
			chat[j] += 1;
			//printf("a\n");
		}
		
		for (k = time_b[i]; k < time_b[i + 1]; ++k)
		{
			chat[k] += 1;
			//printf("b\n");
		}
	}
	for (i = 0; i < length; ++i)
	{
		if (chat[i] == 2)
		{
			++chat_time;
		}
	}
	
	printf("%lld", chat_time);
	
	return 0;
}
