#include <bits/stdc++.h>
using namespace std;

int alphabet[26];
int N;
char input[30];
bool flag = false;

int main()
{

	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> input;
		alphabet[input[0] -'a']++;
	}
	
	for (int i = 0; i < 26; ++i)
	{
		if (alphabet[i] >= 5)
		{
			flag = true;
			cout << static_cast<char>(i + 'a');
		}
	}
	if (flag == false)
		cout << "PREDAJA";

}