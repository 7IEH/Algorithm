#include<iostream>
#include<algorithm>
using namespace std;
void solve();
void solution();

using ll = long long;

ll N, M, H;
ll tree[1000005];

void solve()
{
	ll st, en, mid;
	st = 0;
	en = tree[N - 1];
	while (!(st > en))
	{
		ll sum = 0;
		mid = (st + en) / 2;
		for (int i = 0; i < N; i++)
		{
			if (mid <= tree[i])
				sum += (tree[i] - mid);
		}
		if (sum >= M)
		{
		    H = mid;
			st = mid + 1;
		}
		else
			en = mid - 1;
	}
	solution();
}

void solution()
{
	cout << H;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> tree[i];

	sort(tree, tree + N);
	solve();
}