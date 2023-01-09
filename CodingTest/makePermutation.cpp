#include <bits/stdc++.h>
using namespace std;


// n = 총 갯수
// r = 뽑을 갯수
// depth = 몇번째를 뽑고있는가?
// 트리를 만들어서 도식화했을 때 깊이에 해당


int v[5] = { 1, 2, 3, 4, 5 };

void printV(int* arr)
{
	for (int i = 0; i < 3; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void permutation(int n, int r, int depth)
{
	// 뽑을 갯수와 몇 번째로 뽑는가가 일치하면 출력 후 리턴
	if (r == depth)
	{
		// 출력
		printV(v);
		return;
	}
	for (int i = depth; i < n; ++i)
	{
		swap(v[i], v[depth]);
		permutation(n, r, depth + 1);
		swap(v[i], v[depth]);
	}
	return;
}


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
	/*{
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
	}*/

	{

		permutation(5, 3, 0);

	}
}