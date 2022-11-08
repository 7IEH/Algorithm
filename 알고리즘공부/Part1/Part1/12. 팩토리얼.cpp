#include<iostream>
using namespace std;

int recursion(int num)
{
	if (num == 0)return 1;
	else return num*recursion(num-1);
}

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	int N;
	cin >> N;
	cout << recursion(N);
}