#include <iostream>
#include<string>

std::string longestword(std::string text) {
    std::string temp;
    std::string res;

    for (int i = 0; i < text.size(); i++) {
        if (('a' <= text[i] && text[i] <= 'z') || ('A' <= text[i] && text[i] <= 'Z')) {
            temp += text[i];
        }
        else {
            if (res.size() < temp.size()) {
                res = temp;
            }
            temp = "";
        }
        
    }
    if (res.size() < temp.size()) {
        res = temp;
    }

    return res;
}

int main()
{
    std::string text;
    std::getline(std::cin, text);
    std::cout << longestword(text);

    return 0;
}