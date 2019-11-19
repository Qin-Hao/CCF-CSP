/*
 * Author: Qin Hao
 * Date: 2019/09/09
 * IDE: Dev-C++ 5.11
 * Question: http://118.190.20.162/view.page?gpid=T79
*/

#include <stdio.h>

int main()
{
	int n;	// the number of shops
	scanf("%d", &n);
	
	int first_day[n];	// price on the first day
	int second_day[n];	// price on the second day
	
	int i;	// counter
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &(first_day[i]));
	}
	int average = 0;
	for (i = 1; i <= n - 2; ++i)	// average price on the No.2 to No.n - 1
	{
		second_day[i] = (first_day[i - 1] + first_day[i] + first_day[i + 1]) / 3;
	} 
	second_day[0] = (first_day[0] + first_day[1]) / 2;	// average price of the first shop
	second_day[n - 1] = (first_day[n - 1] + first_day[n - 2]) / 2;	// average price of the last shop
	
	for (i = 0; i < n; ++i)	// print the second day price
	{
		printf("%d ", second_day[i]);
	}
	
	return 0; 
}
