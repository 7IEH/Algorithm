//빅인테저 구현 해보기
#include<iostream>
#include<math.h>
using namespace std;

void hanoi(int st, int dest, int n)
{
	if (n == 1)
	{
		cout << st << ' ' << dest << '\n';
		return;
	}
	hanoi(st, 6 - st - dest, n - 1);
	cout << st << ' ' << dest << '\n';
	hanoi(6 - st - dest, dest, n - 1);
}

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	double N;
	cin >> N;
	long double result = pow(2.f, N) - 1.f;
	printf("%.0Lf\n", result);
	if (N <= 20)
	{
		hanoi(1, 3, N);
	}
}