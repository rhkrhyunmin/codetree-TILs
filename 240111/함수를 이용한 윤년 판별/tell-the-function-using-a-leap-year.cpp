#include <iostream>

bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int y;

    std::cin >> y;

    bool result = isLeapYear(y);

    if (result == 1)
    {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }

    //std::cout  << result << std::endl;

    return 0;
}