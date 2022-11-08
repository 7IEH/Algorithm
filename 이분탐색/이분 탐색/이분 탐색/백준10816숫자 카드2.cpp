#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;

int N, M;
int a[500005];
int result[500005];
// lower_bound() upper_bound() equal_range()
int upper_idx(int num)
{
	int st = 0;
	int en = N;
	int mid;
	while (st < en)
	{
		mid = (st + en) / 2;
		if (a[mid] <= num)
		{
			st = mid + 1;
		}
		else
			en = mid;
	}
	return st;
}

int lower_idx(int num)
{
	int st = 0;
	int en = N;
	int mid;
	while (st < en)
	{
		mid = (st + en) / 2;
		if (a[mid] >= num)
		{
			en = mid;
		}
		else
			st = mid + 1;
	}
	return st;
}

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	sort(a, a + N);
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int num;
		cin >> num;
		result[i] = equal_range(a, a + N, num).second - equal_range(a, a + N, num).first;
	}

	for (int i = 0; i < M; i++)
	{
		cout << result[i] << ' ';
	}
}

