// 에라토스테네스의 체
#include<iostream>
#include<cstring>
using namespace std;

bool prime[1005];
int num[105];

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	memset(prime, true, 1005);
	int N;
	int result=0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> num[i];
	}

	prime[1] = false;
	for (int i = 2; i*i <= 1000; i++)
	{
		if (prime[i])
		{
			for (int j = i * i; j <= 1000; j += i)
			{
				if (prime[j])
					prime[j] = false;
			}
		}
	}


	for (int i = 0; i < N; i++)
	{
		if (prime[num[i]])
			result++;
	}

	cout << result;
}