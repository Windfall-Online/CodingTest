#include <bits/stdc++.h>
using namespace std;


int input[9];

int main()
{

		// 난쟁이 키 입력
		for (int i = 0; i < 9; ++i)
		{
			cin >> input[i];
		}
		// 가짜 난쟁이 분류

		sort(input, input + 9);
		while (next_permutation(input, input + 9))
		{
			int sum = 0;
			for (int i = 0; i < 7; ++i)
			{
				sum += input[i];
			}
			if (sum == 100)
				break;

		}


		// 출력

		for (int i = 0; i < 7; ++i)
		{
			cout << input[i] << '\n';
		}
	
}