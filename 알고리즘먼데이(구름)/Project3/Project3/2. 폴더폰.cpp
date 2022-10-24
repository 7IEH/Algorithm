#include<iostream>
#include<string>
#include<queue>
#include<utility>
using namespace std;

void solve();
void solution();

queue<pair<int, int>>count_a;
int n;
string s, result;
char phone[10][5] = {{}
					,{'1','.',',','?','!'}
					,{'2','A','B','C'}
					,{'3','D','E','F'}
					,{'4','G','H','I'}
					,{'5','J','K','L'}
					,{'6','M','N','O'}
					,{'7','P','Q','R','S'}
					,{'8','T','U','V'}
					,{'9','W','X','Y','Z'} };

void solve()
{
	while (!count_a.empty())
	{
		auto x = count_a.front(); count_a.pop();
		if (x.first == 1 || x.first == 7 || x.first == 9)
		{
			result += phone[x.first][(x.second - 1) % 5];
		}
		else
		{
			result += phone[x.first][(x.second - 1) % 4];
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
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	cin >> s;
	int prev = s[0] - 48;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		int a = s[i] - 48;
		if (prev != a)
		{
			count_a.push({ prev,count });
			count = 0;
		}
		count++;
		prev = a;
	}
	count_a.push({ prev,count });
	solve();
}