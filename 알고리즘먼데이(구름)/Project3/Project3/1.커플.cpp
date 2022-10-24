#include <iostream>
using namespace std;

void solve();
void solution();

int g[100005];
int N, result;


void solve()
{
	for (int i = 0; i < N; i++)
		result += g[i];

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
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		g[i] = a;
	}
	solve();
}