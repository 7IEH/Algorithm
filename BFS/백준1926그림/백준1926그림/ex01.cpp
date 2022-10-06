#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;


int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

int N, M;
int map[501][501];
bool visited[501][501];

queue<pair<int, int>> p;

int max_area;
int area;
int num;

void solution();
void picture();

void picture()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (!(visited[i][j]) && map[i][j] == 1)
			{
				p.push({ i,j });
				visited[i][j] = true;
				num++;
				area = 0;
				while (!p.empty())
				{
					auto a = p.front(); p.pop();
					area++;
					for (int dir = 0; dir < 4; dir++)
					{
						int nx = a.first + dx[dir];
						int ny = a.second + dy[dir];
						if (nx < 0 || ny < 0 || nx >= N || ny >= M)continue;
						if (map[nx][ny] != 1 || visited[nx][ny])continue;
						p.push({ nx,ny });
						visited[nx][ny] = true;
					}
				}
				if (max_area < area) { max_area = area; }
			}
		}
	}



	solution();
}

void solution()
{
	cout << num << '\n' << max_area;
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M;

	for(int i=0;i<N;i++)
		for (int j = 0; j < M; j++)
		{
			cin >> map[i][j];
		}

	picture();
}