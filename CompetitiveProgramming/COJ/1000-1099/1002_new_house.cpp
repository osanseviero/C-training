// http://coj.uci.cu/24h/problem.xhtml?pid=1002

#include <iostream>
using namespace std;

int main()
{
	int tests, N, houseL, dotCount; 
	string input, temp;
	bool check;
	cin >> tests;

	for (int i = 0; i < tests; ++i)
	{
		cin >> N;
		input = "";
		for (int i = 0; i < N; ++i)
		{
			cin >> temp;
			input += temp;
		}

		for (int i = 0; i < (N*N); ++i)
		{
			dotCount = 1;
			if (input[i] == '.')
			{
				houseL = 1;
				while (true)
				{
					if (((i+dotCount) < N*N) && (input[i+dotCount] == '.') && (((i+dotCount) % N) != 0))
					{
						dotCount++;
					}
					else
						break;
				}
				for (int j = dotCount; j > 1; --j)
				{
					
				}
			}
		}
	}

	return 0;
}