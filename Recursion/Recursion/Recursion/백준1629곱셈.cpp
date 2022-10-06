#include<iostream>
#define ll long long
using namespace std;

ll A, B, C;
ll solution(ll, ll, ll);

ll solution(ll a, ll b, ll c)
{
	if (b == 1)return a % c;
	ll temp = solution(a, b / 2, c);
	temp = temp * temp % c;
	if (b % 2 == 0)return temp;
	return temp * a%c;
}

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> A >> B >> C;

	cout<<solution(A, B, C);
}