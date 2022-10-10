#include <iostream>
#define ll long long
using namespace std;

ll n = 0;

int main() {

	ll result = 1;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		ll a;
		cin >> a;
		result *= a;
	}

	cout << result;

	return 0;
}