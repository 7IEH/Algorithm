#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#define INF 0x3f3f3f3f
using namespace std;

void solve();
void solution();

int d[20005];
// 거리, 정점
vector<pair<int, int>>adj[20005];
int st;
int v, e;

priority_queue<pair<int, int>,
	vector<pair<int, int>>,
	greater<pair<int, int>>>pq;

void solve()
{
	d[st] = 0;
	pq.push({ 0,st });
	while (!pq.empty())
	{
		auto cur = pq.top(); pq.pop();
		if (d[cur.second] != cur.first)continue;
		for (auto x : adj[cur.second])
		{
			if (d[x.second] <= d[cur.second] + x.first)continue;
			d[x.second] = d[cur.second] + x.first;
			pq.push({ d[x.second],x.second });
		}
	}
	solution();
}

void solution()
{
	for (int i = 1; i <= v; i++)
	{
		if (d[i] == INF)cout << "INF" << '\n';
		else cout << d[i] << '\n';
	}
}


int main()
{
	cin >> v >> e >> st;
	fill(d, d + v+1, INF);
	for (int i = 0; i < e; i++)
	{
		int u, v, cost;
		cin >> u >> v >> cost;
		adj[u].push_back({ cost,v });
	}
	solve();
}