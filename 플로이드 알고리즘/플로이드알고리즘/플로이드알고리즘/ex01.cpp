#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void solve();
void solution();

int N;
int M;
vector<int> adj[32001];
int deg[32001];
vector<int>result;
queue<int>q;
void solve()
{
	for (int i = 1; i <= N; i++)
	{
		if (deg[i] == 0)q.push(i);
	}
	while (!q.empty())
	{
		int cur = q.front(); q.pop();
		result.push_back(cur);
		for (int nxt : adj[cur])
		{
			deg[nxt]--;
			if (deg[nxt] == 0)q.push(nxt);
		}
	}

	solution();
}

void solution()
{
	for (int i = 0; i < N; i++)
	{
		cout << result[i] << ' ';
	}
}

int main()
{
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		deg[b]++;
	}

	solve();
}