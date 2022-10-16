#include <iostream>
#include <vector>
using namespace std;
int t;
int n;
vector<float>person[1005];
int result[15];
void solve();
void solution();

void solve()
{

	for (int i = 0; i < t; i++)
	{
		float average = 0.f;
		for (int j = 0; j < person[i].size(); j++)
		{
			average += person[i][j];
		}
		average /= person[i].size();

		for (int j = 0; j < person[i].size(); j++)
		{
			if (person[i][j] >= average)
			{
				result[i]++;
			}
		}
	}
	solution();
}

void solution()
{
	for (int i = 0; i < t; i++)
	{
		cout << result[i] << '/' << person[i].size() << '\n';
	}
}

int main()
{
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			int a;
			cin >> a;
			person[i].push_back(a);
		}
	}
	solve();
}