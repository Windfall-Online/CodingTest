#include <bits/stdc++.h>
using namespace std;

int main()
{

	/*{

		for (int i = 1; i < 4; ++i)
		{
			for (int j = 1; j < 4; ++j)
			{
				if (j == i) continue;
				for (int k = 1; k < 4; ++k)
				{
					if (k == j || k == i) continue;
					cout << i << j << k << endl;
				}
			}

		}
	}*/
	{
		bool visited[4] = { false, };

		for (int i = 1; i < 4; ++i)
		{
			visited[i] = true;

			for (int j = 1; j < 4; ++j)
			{
				if (visited[j]) continue;
				else visited[j] = true;
				for (int k = 1; k < 4; ++k)
				{
					if (visited[k]) continue;
					else visited[k] = true;

					cout << i << j << k << endl;
					visited[k] = false;
				}
				visited[j] = false;
			}
			visited[i] = false;
		}
	}
}