#include<iostream>
#include<algorithm>
using namespace std;
void solve();
void solution();

int N, K;

int character[1000005];

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		cin >> character[i];
	}
	solve();
}

void solve()
{
	sort(character, character + N);

}

void solution()
{

}