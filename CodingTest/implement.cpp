#include <bits/stdc++.h>
using namespace std;

// 1. 앞에서부터 3개의 문자열을 출력하라
// 2. 해당 문자열을 거꾸로 해서 출력하라
// 3. 해당 문자열 끝에 "umjunsik"이란 문자열을 추가하라

string input = "abcde";

int main()
{

	// 3개 출력
	cout << input.substr(0, 3) << '\n';
	// 거꾸로 출력
	reverse(input.begin(), input.end());
	cout << input << '\n';
	// 엄준식 추가
	cout << input + "umjunsik" << '\n';
	
}