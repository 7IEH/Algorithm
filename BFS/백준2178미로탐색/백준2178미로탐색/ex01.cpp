#include<iostream>
#include<queue>
#include<algorithm>
#include<string>
using namespace std;

string a[102];

int N, M;
int map[102][102];
int range[102][102];
bool visited[102][102];

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,-1,1 };

queue<pair<int, int>> q;

void solution();
void logic();

void logic()
{
	range[0][0] = 1;
	visited[0][0] = true;
	while (!q.empty())
	{
		auto f = q.front(); q.pop();
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = f.first + dx[dir];
			int ny = f.second + dy[dir];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M)continue;
			if (map[nx][ny] != 1 || visited[nx][ny])continue;
			range[nx][ny] = range[f.first][f.second] + 1;
			q.push({ nx,ny });
			visited[nx][ny] = true;
		}
	}

	solution();
}

void solution()
{
	cout << range[N - 1][M - 1];
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> N >> M;


	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			map[i][j] = a[i][j]-48;
		}
	}

	q.push({ 0,0 });
	logic();
}

