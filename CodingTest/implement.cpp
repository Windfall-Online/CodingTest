#include <bits/stdc++.h>
using namespace std;

// 1. �տ������� 3���� ���ڿ��� ����϶�
// 2. �ش� ���ڿ��� �Ųٷ� �ؼ� ����϶�
// 3. �ش� ���ڿ� ���� "umjunsik"�̶� ���ڿ��� �߰��϶�

string input = "abcde";

int main()
{

	// 3�� ���
	cout << input.substr(0, 3) << '\n';
	// �Ųٷ� ���
	reverse(input.begin(), input.end());
	cout << input << '\n';
	// ���ؽ� �߰�
	cout << input + "umjunsik" << '\n';
	
}