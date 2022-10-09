#include <bits/stdc++.h>
using namespace std;

int num[4];
int result;


int main() {
	for (int i = 0; i < 4; i++)
	{
		cin >> num[i];
	}

	do {
		int temp = 0;
		temp = abs(num[0] - num[2]) + abs(num[1] - num[3]);
		if (result < temp)
		{
			result = temp;
		}
	} while (next_permutation(num, num + 4));

	cout << result;
}