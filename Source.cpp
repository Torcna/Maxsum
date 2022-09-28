#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int sum = 0, loc = 0;
	const int N = 10;
	int a[N];
	int b[N];


	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		a[i] = rand() % 1000 - rand() % 1000;
		cout << a[i] << " ";
	}


	cout << '\n';


	b[0] = a[0];

	cout << b[0]<<" ";
	for (int i = 1; i < N; i++)
	{
		b[i] = a[i] + b[i - 1];
		cout << b[i] << ' ';
	}

	cout << '\n';

	for (int i = 0; i < N; i++)
	{
		if (b[i] > sum)
		{
			sum = b[i];
		}
		if (i == 0)
		{
			loc += b[i];
			if (loc>sum)
			{
				sum = loc;
			}
		}
		else
		{
			for (int j = 0; j < i; j++)
			{
				loc = b[i] - b[j];
				if (sum < loc)
				{
					sum = loc;
				}
			}
		}
	}
	cout << sum;
}
