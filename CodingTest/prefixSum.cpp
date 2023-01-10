#include <bits/stdc++.h>
using namespace std;
int input[100004];
int psum[100004];
int n, m;
int a, b;

int main()
{
	
	// 문제1. 수의 개수 N 합을 구해야 하는 횟수 M 그 이 후 N개의 수가 주어진다
	// 수는 100 이하의 자연수, 그 이후 M개의 줄에는 합을 구해야 하는 구간 A, B가 주어진다

	// M개의 줄에 A부터 B까지의 합을 구하라
	// 예제 입력
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