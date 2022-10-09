#include<iostream>
#include<vector>
#include<tuple>
#include<algorithm>
using namespace std;

void solve();
void solution();


vector<int>p(305, -1);

int getparent(int num)
{
	if (p[num] < 0)return num;
	return getparent(p[num]);
}

bool find(int a,int b)
{
	a = getparent(a); b = getparent(b);
	if (a == b)return 0;
	if (a < b)p[b] = a;
	else p[a] = b;
	return 1;
}

tuple<int, int, int> g[100000];
int result;
int cnt1;
int cnt2;
int N;

void solve()
{
	sort(g, g + cnt1);
	int a, b, c;
	for (int i = 0; i < cnt1; i++)
	{
		tie(a, b, c) = g[i];
		if (!find(b, c)) continue;
		result += a;
		cnt2++;
		if (N == cnt2)break;
	}
	
	solution();
}

void solution()
{
	cout << result;
}

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int a;
		int b=i+1;
		int c=N+1;
		cin >> a;
		g[i] = tie(a, b, c);
		cnt1++;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int a;
			cin >> a;
			if (i < j)
			{	
				int b = i + 1;
				int c = j + 1;
				g[cnt1] = tie(a, b, c);
				cnt1++;
			}
		}
	}

	solve();
}