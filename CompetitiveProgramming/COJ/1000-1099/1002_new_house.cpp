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
		houseL = 0;
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
				if (houseL == 0)
				{
					houseL = 1;
				}
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
					check = true;
					for (int k = 0; k < j; ++k)
					{
						for (int l = 0; l < j; l++)
						{
							if (input[i+k+(N*l)] == '#')
							{
								check = false;
							}
						}
					}
					if ((check == true) && (houseL < j))
					{
						houseL = j;
					}
				}
			}
		}
		cout << houseL << endl;
	}

	return 0;
}