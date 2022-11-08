#include<iostream>
#include<queue>
#include<utility>
using namespace std;

void solve();
void solution();

int N, M;

int map[105][105];
bool visited[105][105];

int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };

queue<pair<int, int>>q;
int result;

int dist[105][105];

void solve()
{
	int sx, sy;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			if (!visited[i][j] && map[i][j] == 1)
			{
				q.push({ i,j });
				visited[i][j] = true;
			}
			while (!q.empty())
			{
				auto cur = q.front(); q.pop();
				for (int dir = 0; dir < 4; dir++)
				{
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];
					if (nx < 0 || nx >= N || ny < 0 || ny >= N)continue;
					if (visited[nx][ny])continue;
					q.push({ nx,ny });
					visited[nx][ny] = true;
					dist[nx][ny] = dist[cur.first][cur.second] + 1;
					if (dist[nx][ny] <= M && map[nx][ny] == 2)
					{
						result++;
						for (int a = 0; a < N; a++)
							fill(dist[a], dist[a] + N, 0);
						for (int a = 0; a < N; a++)
							fill(visited[a], visited[a] + N, false);
						while (!q.empty())q.pop();
						break;
					}
					if (dist[nx][ny] > M)
					{
						for (int a = 0; a < N; a++)
							fill(dist[a], dist[a] + N, 0);
						for (int a = 0; a < N; a++)
							fill(visited[a], visited[a] + N, false);
						while (!q.empty())q.pop();
						break;
					}
				}
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
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> map[i][j];

	solve();
}