#include<iostream>
#include<algorithm>
using namespace std;

int num[10];
int result = 0;
int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> num[i];
	
	do {
		int sum = 0;
		cout << '\n';
		for (int i = 0; i < N-1; i++)
		{
			sum += abs(num[i] - num[i + 1]);
			cout << num[i] << ' ';
		}
		cout << sum;
		if (result < sum)result = sum;
	} while (next_permutation(num, num + N));

	cout << result;
}