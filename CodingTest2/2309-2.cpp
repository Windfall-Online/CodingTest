#include <bits/stdc++.h>
using namespace std;

// 9명의 난쟁이 중에서 
// 순서에 상관없이 2명을 고르고 전체에서 빼기 후 100이 되는걸 구하는 방법
// 재귀함수로 작성해보기


//int input[9];
//int sum;
//vector<int> temp;
//pair<int, int> ret;
//void Combination(int* arr, int start)
//{
//	if (temp.size() == 2)
//	{
//		if ((sum - temp[0] - temp[1]) == 100)
//		{
//			ret = { temp[0], temp[1] };
//			return;
//		}
//	}
//
//	for (int i = start + 1; i < 9; ++i)
//	{
//		temp.push_back(input[i]);
//		Combination(arr, i);
//		temp.pop_back();
//	}
//	return;
//}


vector<int> dwarf;
vector<int> vec;


void Print()
{
	sort(vec.begin(), vec.end());
	for (int i = 0; i < 7; ++i)
	{
		cout << vec[i] << '\n';
	}
	exit(0);
}

void secondCombination(int depth, int startPoint)
{
	if (depth == 7)
	{
		int sum = 0;
		for (int i = 0; i < 7; ++i)
			sum += vec[i];
		if (sum == 100)
		{
			Print();
		}
		else
		{
			return;
		}
		
	}
	for (int i = startPoint; i < 9; ++i)
	{
		vec.push_back(dwarf[i]);
		secondCombination(depth + 1, i + 1);
		vec.pop_back();
	}
}

int main()
{
	//for (int i = 0; i < 9; ++i)
	//{
	//	cin >> input[i];
	//	sum += input[i];
	//}
	//sort(input, input + 9);
	//Combination(input, -1);
	//for (int i = 0; i < 9; ++i)
	//{
	//	if (input[i] == ret.first || input[i] == ret.second)
	//		continue;

	//	cout << input[i] << '\n';
	//}

	int temp;
	for (int i = 0; i < 9; ++i)
	{
		cin >> temp;
		dwarf.push_back(temp);
	}
	secondCombination(0, 0);

}