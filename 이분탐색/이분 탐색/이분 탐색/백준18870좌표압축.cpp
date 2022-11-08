#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N;
int a[1000005];
int temp[1000005];
int result[1000005];

vector<int>v;

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	memcpy(temp, a, sizeof(int)*N);
	
	sort(a, a + N);

	for (int i = 0; i < N; i++)
	{
		result[i] = lower_bound(a, a + N, temp[i]) - a;
	}

	for (int i = 0; i < N; i++)
	{
		cout << result[i] << ' ';
	}
}