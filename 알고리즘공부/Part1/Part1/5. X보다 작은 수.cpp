#include<iostream>
#include<algorithm>
using namespace std;

int A[10005];

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);

	int N, X;
	cin >> N >> X;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < N; i++)
	{
		if (A[i] < X)
			cout << A[i] << ' ';
	}
	
}

//int main()
//{
//	cin.tie(0); cout.tie(0);
//	ios::sync_with_stdio(0);
//
//	int N, X;
//	cin >> N >> X;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> A[i];
//	}
//	sort(A, A + N);
//	for (int i = 0; i < N; i++)
//	{
//		if (A[i] >= 5)break;
//		cout << A[i] << ' ';
//	}
//}