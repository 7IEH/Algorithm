#include<iostream>
using namespace std;

bool vertical[15];
bool check1[30];
bool check2[30];

int counting;
int N;

void Nqueen(int seq)
{
	if (seq == N)
	{
		counting++;
		return;
	}
	for (int i = 0; i < N; i++)
	{
		if (vertical[i]||check1[seq-i+(N-1)]||check2[seq+i])continue;
		vertical[i] = true;
		check1[seq - i + (N - 1)] = true;
		check2[seq + i] = true;
		Nqueen(seq + 1);
		vertical[i] = false;
		check1[seq - i + (N - 1)] = false;
		check2[seq + i] = false;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> N;

	Nqueen(0);

	cout << counting;
}