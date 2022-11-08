#include<iostream>
#include<algorithm>
using namespace std;

int N, M;
int check[100005];
bool result[100005];

bool binary_check(int a)
{
	int st = 0;
	int en = N-1;
	int mid;
	while (st <= en)
	{
		mid = (st + en) / 2;
		if (check[mid] == a)return 1;
		else if (check[mid] < a)st = mid + 1;
		else en = mid - 1;
	}

	return 0;
}

// binary_search
// STL
int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> check[i];
	}
	sort(check, check + N);
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int a;
		cin >> a;
		result[i] = binary_check(a);
	}

	for (int i = 0; i < M; i++)
	{
		cout << result[i] << '\n';
	}
}
