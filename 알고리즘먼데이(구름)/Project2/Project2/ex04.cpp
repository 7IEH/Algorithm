#include <iostream>
using namespace std;

void solve();
void solution();

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

int n;
int k;
int result;
int map[25][25];

void solve()
{
	for (int i = 0; i < k; i++)
	{
		int a, b;
		cin >> a >> b;
		map[a - 1][b - 1] += 1;
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = (a - 1) + dx[dir];
			int ny = (b - 1) + dy[dir];
			if (nx < 0 || ny < 0 || nx >= n || ny >= n)continue;
			map[nx][ny] += 1;
		}

	}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			result += map[i][j];

	solution();
}

void solution()
{
	cout << result;
}

int main()
{
	cin >> n;
	cin >> k;
	solve();
}