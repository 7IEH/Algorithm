#include<iostream>
using namespace std;

int N;

void solution(int, int, int);

void solution(int start,int dest,int num)
{
	if (num == 1)
	{
		cout << start << ' ' << dest << endl;
		return;
	}
	solution(start, 6 - dest - start, num - 1);
	cout << start << ' ' << dest << endl;
	solution(6 - dest - start, dest, num - 1);
}

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> N;
	solution(1,3,N);
}