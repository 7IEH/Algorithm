#include<iostream>
#include<vector>
#include<queue>
using namespace std;

queue<int> q;
vector<int> result;
vector<int> adj[32001];
int	deg[32001];
int N,M;

void solve();
void solution();

void solve()
{
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		deg[b]++;
	}
	for (int i = 1; i <= N; i++)
		if (deg[i] == 0) q.push(i);
	while (!q.empty())
	{
		int cur = q.front(); q.pop();
		result.push_back(cur);
		for (int nxt : adj[cur])
		{
			deg[nxt]--;
			if (deg[nxt] == 0) q.push(nxt);	
		}
	}

	solution();
}

void solution()
{
	for (int nxt : result)
	{
		cout << nxt <<' ';
	}
}


int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> N >> M;
	solve();
}