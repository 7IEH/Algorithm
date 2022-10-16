#include <iostream>
#include <string>
using namespace std;
void solve();
void solution();

string s;
int result;

void solve()
{
	char temp = '0';
	for (int i = 0; i < s.size(); i++)
	{
		if (temp != s[i])
		{
			temp = s[i];
			result++;
		}
	}

	solution();
}

void solution()
{
	cout << result;
}

int main()
{
	int n;
	cin >> n;
	cin >> s;

	solve();
}