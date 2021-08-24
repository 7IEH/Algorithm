#include <iostream>

int gcd(int a, int b) {

    int temp;

    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    int rest;

    while (b != 0) {
        rest = a % b;
        a = b;
        b = rest;
    }
    // if(b==0) return a;
    // else gcd(b,a%b);

    return a;
}

int main()
{
    int x, y, result;
    std::cout << "최대 공약수를 구할 두 수를 입력하세요: " << std::endl;
    std::cin >> x >> y;

    result = gcd(x, y);

    std::cout << x << " 와 " << y << " 의 최대 공약수는 : " << result;
}
