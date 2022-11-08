#include<iostream>
using namespace std;

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	int A, B, V,result;
	cin >> A >> B >> V;
	result = (V - A) / (A - B) + 1;
	(V - A) % (A - B) <= A&&(V-A)%(A-B)>0 ? result += 1 : result;

	cout << result;
}