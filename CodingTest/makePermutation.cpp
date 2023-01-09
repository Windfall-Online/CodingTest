#include <bits/stdc++.h>
using namespace std;


// n = �� ����
// r = ���� ����
// depth = ���°�� �̰��ִ°�?
// Ʈ���� ���� ����ȭ���� �� ���̿� �ش�


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
	// ���� ������ �� ��°�� �̴°��� ��ġ�ϸ� ��� �� ����
	if (r == depth)
	{
		// ���
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