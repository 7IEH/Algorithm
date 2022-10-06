#include<iostream>
#include<vector>
using namespace std;

vector<int> v[32001];
int N,M;

void solve();
void solution();

void solve()
{
	for (int i = 0; i < M; i++)
	{
		int a, b = 0;
		cin >> a >> b;
		v[b].push_back(a);
	}
	solution();
}

void solution()
{
	for (int i = N; i > 0; i--)
	{
		if (!v[i].empty())
		{
			for (int j = 0; j < v[i].size(); j++)
			{
				cout << v[i][j] <<' ';
			}
			cout << i << ' ';
		}
	}
}


int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> N >> M;
	solve();
}