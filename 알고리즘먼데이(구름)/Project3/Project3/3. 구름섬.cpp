#include<iostream>
#include<queue>
using namespace std;
void solve();
void solution();

int N, M, K;
int result = 0x3f3f3f3f;

bool visitied[1005];
int dist[1005];
vector<int>v[1005];
queue<int>q;

void solve()
{
	while (!q.empty())
	{
		auto x = q.front(); q.pop();
		for (int i = 0; i < v[x].size(); i++)
		{
			if (visitied[v[x][i]])continue;
			visitied[v[x][i]] = true;
			dist[v[x][i]] = dist[x] + 1;
			q.push(v[x][i]);
		}
	}

	solution();
}

void solution()
{
	if (dist[N] > 0 && dist[N] <= K)cout << "YES";
	else cout << "NO";
}

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> N >> M >> K;
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	q.push(1);
	visitied[1] = true;
	solve();
}