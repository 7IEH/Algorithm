#include<iostream>
#include<vector>
#include<tuple>
#include<algorithm>
using namespace std;
vector<int> p(10005, -1);

// union-find
int getparent(int num)
{
	if (p[num] < 0)return num;
	return getparent(p[num]);
}

bool union_find(int u,int v)
{
	u = getparent(u); v = getparent(v);
	if (u == v)return 0;
	if (u < v)p[v] = u;
	else p[u] = v;
	return 1;
}

// 알고리즘
tuple<int, int, int> g[100005];
int V, E;
void solution();
void solve();

int result = 0;

void solve()
{
	sort(g, g + E);
	int a;
	int b;
	int c;
	int cnt = 0;
	for (int i = 0; i < E; i++)
	{
		tie(a, b, c) = g[i];
		if (!union_find(b,c))continue;
		result += a;
		cnt++;
		if (V - 1 == cnt)break;
	}
	solution();
}

void solution()
{
	cout << result;
}

int main()
{
	cin >> V >> E;
	int A, B, C;
	for (int i = 0; i < E; i++)
	{
		cin >> A >> B >> C;
		g[i] = tie(C, A, B);
	}

	solve();
}