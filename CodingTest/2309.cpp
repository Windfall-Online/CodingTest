#include <bits/stdc++.h>
using namespace std;


int input[9];

int main()
{

		// ������ Ű �Է�
		for (int i = 0; i < 9; ++i)
		{
			cin >> input[i];
		}
		// ��¥ ������ �з�

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


		// ���

		for (int i = 0; i < 7; ++i)
		{
			cout << input[i] << '\n';
		}
	
}