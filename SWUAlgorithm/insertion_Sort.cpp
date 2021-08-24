#include <iostream>


void insertion_sort(int list[], int n) {
	
	int j,key;

	for (int i = 1; i < n; i++) {
		key = list[i];
		j = i - 1;
		while(j >= 0 && key < list[j]) {
			list[j + 1] = list[j];
			j--;
		}
		list[j+1] = key;
	}
}


int main()
{
	int n = 0;
	int* list = new int[n];

	std::cout << "정렬할 배열의 크기를 입력해주세요 : "; 
	std::cin >> n;

	if (n == 0) {
		std::cout << "0 값을 입력했습니다. 프로그램을 종료합니다."<<std::endl;
		return 0;
	}
	else {
		for (int x = 0; x < n; x++) {
			std::cout << "배열의" << x + 1 << "번 째 정수 : ";
			std::cin >> list[x];
		}
	}

	insertion_sort(list, n);

	std::cout << "오름 차순으로 정렬된 배열은 다음과 같다." << std::endl;
	for (int x = 0; x < n; x++) {
		std::cout << list[x];
	}
	delete[] list;

	return 0;

}