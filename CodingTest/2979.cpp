#include "bits/stdc++.h"
using namespace std;
// 시각 = 이상 미만
int A;
int B;
int C;

int in;
int out;

int truckTime[101];

int cost;

int main()
{
	cin >> A;
	cin >> B;
	cin >> C;

	for (int i = 0; i < 3; ++i)
	{
		cin >> in;
		cin >> out;
		for (int j = in; j < out; ++j)
		{
			truckTime[j]++;
		}
	}

	for (int i = 1; i < 101; ++i)
	{
		if (truckTime[i] == 1)
			cost += A * 1;
		else if (truckTime[i] == 2)
			cost += B * 2;
		else if(truckTime[i] == 3)
			cost += C * 3;
	}
	cout << cost;
}