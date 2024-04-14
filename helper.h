#pragma once


int SqrSum(int a, int b)
{
	return (a + b) * (a + b);
}

void PrintNumber(bool print_is_even, int n)
{
	for (int i = 0; i <= n; ++i)
	{
		if ((i%2) == 0 )
		{
			if (print_is_even) { std::cout << i << " "; }
		}
		else
		{
			if (!print_is_even) { std::cout << i << " "; }
		}
	}
};

void ModeratePrintNumber(bool print_is_even, int n)
{
	int i = 0;
	if (!print_is_even) { i = 1; }

	for (; i <= n; i+=2)
	{
		std::cout << i << " ";
	}
};