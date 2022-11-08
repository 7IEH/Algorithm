#include <iostream>
#include <queue>
#include <utility>
using namespace std;

void solve();
void solution();

int map[105][105];
int map2[105][105];
int visited[105][105];

int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };

queue<pair<int, int>>q;

int N, M;

int result = -1;
int day;

void solve()
{

	while (1)
	{
		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++)
			{
				map2[i][j] = map[i][j];
			}
		// 물에 잠기는 로직
		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++)
			{
				if (map[i][j] == 1)
				{
					for (int dir = 0; dir < 4; dir++)
					{
						int nx = i + dx[dir];
						int ny = j + dy[dir];
						if (nx < 0 || nx >= N || ny < 0 || ny >= M)continue;
						if (map2[nx][ny] == 0)
						{
							map[i][j] = 0;
							break;
						}
					}
				}
			}
		day++;
		// 잠긴 뒤 섬 추적
		bool find = false;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (!visited[i][j] && map[i][j] == 1)
				{
					q.push({ i,j });
					visited[i][j] = true;
					find = true;
					break;
				}
			}
			if (find)
				break;
		}

		while (!q.empty())
		{
			auto cur = q.front(); q.pop();
			for (int dir = 0; dir < 4; dir++)
			{
				int nx = cur.first + dx[dir];
				int ny = cur.second + dy[dir];
				if (nx < 0 || nx >= N || ny < 0 || ny >= M)continue;
				if (visited[nx][ny] || map[nx][ny] == 0)continue;
				q.push({ nx,ny });
				visited[nx][ny] = true;
			}
		}

		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++)
			{
				if (!visited[i][j] && map[i][j] == 1)
				{
					result = day;
					break;
				}
			}

		for (int i = 0; i < N; i++)
			fill(visited[i], visited[i] + M, false);

		// 빠져나올 로직
		int counting = 0;
		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++)
			{
				if (map[i][j] == 1)counting++;
			}

		if (counting == 0 || result != -1)
			break;
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
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
		{
			cin >> map[i][j];
		}
	solve();
}