#include <iostream>

int N;
int col[15];
int result = 0;
int count = 0;
bool promising(int i) {

    for (int j = 0; j < i; j++) {

        if (col[j] == col[i] || abs(col[i] - col[j]) == i - j)
            return false;
    }
    return true;
}

void queens(int i) {
    if (i == N)
        result++;
    else
    {
        for (int j = 0; j < N; j++) {

            col[i] = j;
            for (int k = 0; k < N; k++) {
                std::cout << col[k];
                count++;
            }
            std::cout << i;
            std::cout << std::endl;
            if (promising(i))
                queens(i + 1);

        }
    }
}
int main()
{
    bool k = true;
    char d;
    while (k) {
        result = 0;
        std::cout << "n-여왕말 알고리즘입니다. n 값을 입력해주세요 : ";
        std::cin >> N;
        queens(0);

        std::cout << N << " - 여왕말 배치의 경우의 수는" << result << "개 입니다.";
        result = 0;
        std::cout << "알고리즘 종료?";
        std::cin >> d;
        if (d == 'Y')
            k = false;
    }

    return 0;
}
