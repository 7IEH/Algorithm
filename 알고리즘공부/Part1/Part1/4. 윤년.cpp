#include<iostream>
using namespace std;

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	int year;
	cin >> year;
	if (!(year % 4) && (year % 100 || !(year % 400)))
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
}