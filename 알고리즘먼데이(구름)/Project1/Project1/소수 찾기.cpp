#include<iostream>
#include<vector>
using namespace std;

int num;
long long result;

int A[1000000];
vector<int>prime;


int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		A[i] = i + 1;
	}

	for (int i = 2; i <= num; i++)
	{
		int count = 0;
		if (i == 2)
		{
			prime.push_back(i);
			continue;
		}
		for (int j = 2; j < i; j++)
		{
			if (i%j == 0)count++;
		}
		if (count == 0)
		{
			prime.push_back(i);
		}
	}
	cout << prime.size();

	return 0;
}