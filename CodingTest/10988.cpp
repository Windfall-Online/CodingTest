#include <bits/stdc++.h>
using namespace std;


string input;
string temp;


int main()
{
	
	cin >> input;
	temp = input;
	reverse(input.begin(), input.end());

	if (temp == input)
		cout << "1";
	else
		cout << "0";

}