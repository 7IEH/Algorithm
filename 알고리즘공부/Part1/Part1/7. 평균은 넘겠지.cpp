#include<iostream>
#include<vector>
using namespace std;

int C;
vector<double>result;
int arr[1005];
int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> C;
	for (int i = 0; i < C; i++)
	{
		double N;
		double sum = 0;
		double average = 0;
		double counting = 0;
		cin >> N;
		for (int j = 0; j < N; j++)
		{
			double score;
			cin >> score;
			arr[j] = score;
			sum += score;
		}
		average = sum / N;
		for (int j = 0; j < N; j++)
		{
			if(arr[j]>average)
				counting++;
		}
		result.push_back((counting / N) * 100.f);
	}

	for (float nxt : result)
	{
		// c++ 소수자리 정하기
		cout << fixed;
		cout.precision(3);
		cout << nxt << '%' << '\n';
	}
}