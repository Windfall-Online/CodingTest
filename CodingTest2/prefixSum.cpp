#include <bits/stdc++.h>
using namespace std;
int input[100004];
int psum[100004];
int n, m;
int a, b;

int main()
{
	
	// ����1. ���� ���� N ���� ���ؾ� �ϴ� Ƚ�� M �� �� �� N���� ���� �־�����
	// ���� 100 ������ �ڿ���, �� ���� M���� �ٿ��� ���� ���ؾ� �ϴ� ���� A, B�� �־�����

	// M���� �ٿ� A���� B������ ���� ���϶�
	// ���� �Է�
	// 8 3
	// 1 2 3 4 5 6 7 8
	// 1 5
	// 1 6
	// 3 5

	{
		
		cin >> n >> m;
		for (int i = 1; i <= m; ++i)
		{
			cin >> input[i];
			psum[i] = psum[i - 1] + input[i];
		}

		for (int i = 0; i < m; ++m)
		{
			cin >> a >> b;
			cout << psum[b] - psum[a - 1] << '\n';
		}


	}

}