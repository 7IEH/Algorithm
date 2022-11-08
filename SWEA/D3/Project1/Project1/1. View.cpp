#include<iostream>
#include<array>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	int _iBuilding[1005];
	int _iResult = 0;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> _iBuilding[test_case];
	}

	for (test_case = 3; test_case <= T - 2; ++test_case)
	{
		int _iMax = max(max(_iBuilding[test_case - 2], _iBuilding[test_case - 1]), max(_iBuilding[test_case + 1], _iBuilding[test_case + 2]));
		if (_iMax < _iBuilding[test_case])
			_iResult += _iBuilding[test_case] - _iMax;
	}
	cout << _iResult;
	return 0;
}