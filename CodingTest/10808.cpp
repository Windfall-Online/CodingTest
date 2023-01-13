#include <bits/stdc++.h>
using namespace std;


char str[105];
int alpha[26];

int main()
{
	cin >> str;

	for (int i = 0; str[i] != '\0'; ++i)
	{
		
		alpha[str[i] - 'a']++;
	}
	for (int i = 0; i < 26; ++i)
	{
		cout << alpha[i] << " ";
	}
}
