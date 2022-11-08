//permutation and combination 확실히 알기
#include<iostream>
#include<algorithm>
#include<cstring>
#include<array>
using namespace std;

int height[9];
int num[9] = { 0,0,0,0,0,0,0,1,1 };
int man[7];

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	for (int i = 0; i < 9; i++)
	{
		cin >> height[i];
	}

	int result = 0;
	
	do 
	{
		int count = 0;
		memset(man, 0, sizeof(int) * 7);
		result = 0;
		for (int i = 0; i < 9; i++)
		{
			if (num[i] == 0)
			{
				result += height[i];
				man[count++] = height[i];
			}
		}
		if (result == 100)
			break;
	} 
	while (next_permutation(num, num + 9));

	sort(man, man + 7);

	for (int nxt : man)
	{
		cout << nxt << '\n';
	}
}