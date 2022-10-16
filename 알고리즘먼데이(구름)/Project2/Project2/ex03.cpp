#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
void solve();
void solution();

pair<float, string>temp[10005];
pair<string,float>person[10005];

int N;
int k;

void solve()
{
	sort(temp, temp + N);

	for (int i = 0; i < N; i++)
	{
		person[i] = make_pair(temp[i].second, temp[i].first);
	}

	sort(person, person + N);

	solution();
}

void solution()
{
	cout << fixed;
	cout.precision(2);
	cout << person[k - 1].first <<' '<< person[k - 1].second;
}

int main()
{
	float height;
	string name;
	cin >> N >> k;
	for (int i = 0; i < N; i++)
	{
		cin >> name >> height;
		temp[i] = make_pair(height, name);
	}
	solve();
}