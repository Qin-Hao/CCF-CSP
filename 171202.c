/*
 * Author: Qin Hao
 * Date: 2019/09/11
 * IDE: Dev-C++ 5.11
 * Question: http://118.190.20.162/view.page?gpid=T67
 * Grade: 100
*/

int main()
{
	int n, k;	// the number of people, the key number
	scanf("%d %d", &n, &k);
	
	int people[n];	// people array
	int i;	// counter
	for (i = 0; i < n; ++i)
	{
		people[i] = 1;
	}
	int out_num = 0;	// out people number
	int key = 0, counter = 0;
	
	while (out_num != n - 1)
	{
		if ((key + 1) % k != 0 && (key + 1) % 10 != k)
		{
			if (people[counter] == 1)
			{
				++key;
				counter = (++counter) % n;
			}
			else
			{
				counter = (++counter) % n;
			}
		}
		else
		{
			if (people[counter] == 1)
			{
				people[counter] = 0;
				++out_num;
				
				++key;
				counter = (++counter) % n;
			}
			else
			{
				counter = (++counter) % n;
			}
		}
	}
	
	for (i = 0; i < n; ++i)
	{
		if (people[i] != 0)
		{
			printf("%d", i + 1);
		}
	}
	
	return 0;
}
