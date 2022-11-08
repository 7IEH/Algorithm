#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string word[20005];

bool compare(string a, string b)
{
	return a.size() < b.size();
}

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> word[i];
	}

	sort(word, word + N);
	sort(word, word + N, compare);

	for (int i = 0; i < N; i++)
	{
		if (i > 0)
		{
			if (word[i] == word[i - 1]) continue;
			else cout << word[i] << '\n';
		}
		else
		{
			cout << word[i] << '\n';
		}
	}
}