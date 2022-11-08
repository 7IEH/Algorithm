#include<iostream>
#include<string>
using namespace std;

string s;

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	//string s 받는거 get 사용
	getline(cin, s);

	bool word = false;
	int counting = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if ((('a'<=s[i])&&(s[i]<='z'))||(('A'<=s[i])&&(s[i]<='Z'))&&!word)
		{
			word = true;
		}
		else if (!((('a' <= s[i]) && (s[i] <= 'z')) || (('A' <= s[i]) && (s[i] <= 'Z'))) &&word)
		{
			word = false;
			counting++;
		}
	}
	if (word)
	{
		counting++;
	}

	cout << counting;
}