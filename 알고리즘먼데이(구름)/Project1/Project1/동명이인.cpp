#include<iostream>
#include<string>
using namespace std;

int num = 0;
string name;
int result = 0;

int main()
{
	cin >> num >> name;

	for (int i = 0; i < num; i++)
	{
		string temp;
		cin >> temp;

		if (temp.find(name)!=string::npos)
		{
			result++;
		}
	}

	cout << result;

}