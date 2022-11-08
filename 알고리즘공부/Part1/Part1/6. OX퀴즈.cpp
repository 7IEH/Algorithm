#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int>v;

int main()
{
	int n;
	int sum = 0;
	int counting = 0;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		counting = 0;
		sum = 0;
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == 'O')
			{
				counting++;
				sum += counting;
			}
			else
			{
				counting = 0;
			}
		}
		v.push_back(sum);
	}

	for (int nxt : v)
	{
		cout << nxt << '\n';
	}
}