#include<bits/stdc++.h>
using namespace std;
void solve();
void solution();

int N;
int M;
int dist[100][100];
bool visited[100][100];

const int INF = 0x3f3f3f3f;

void solve()
{
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			for (int z = 1; z <= N; z++)
			{
				if (dist[j][i] + dist[i][z] < dist[j][z])
				{
					dist[j][z] = dist[j][i] + dist[i][z];
				}
			}
		}
	}

	solution();
}

void solution()
{
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cout << dist[i][j] <<' ';
		}
		cout << endl;
	}
}

int main()
{
	cin >> N;
	cin >> M;

	for (int i = 1; i <= N; i++)
		fill(dist[i], dist[i] + 1 + N, INF);

	for (int i = 0; i < M; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (dist[a][b] > c)dist[a][b] = c;
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (i == j)dist[i][j] = 0;
		}
	}
	solve();
}