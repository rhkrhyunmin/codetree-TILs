#include <iostream>

// 각 월의 일수를 저장하는 배열
int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// 윤년인지를 확인하는 함수
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 날짜를 일수로 변환하는 함수
int dateToDays(int year, int month, int day) {
    int days = day; // 시작일을 더함

    // 해당 연도가 윤년인지 확인하여 2월의 일수를 수정
    if (month > 2 && isLeapYear(year)) {
        days++;
    }

    // 시작 월 이전의 월들의 일수를 더함
    for (int i = 1; i < month; ++i) {
        days += daysInMonth[i];
    }

    // 해당 연도의 일수를 더함
    days += (year - 2011) * 365;

    // 윤년의 수를 더함
    days += ((year - 1) / 4 - 502); // 2011년 이전의 윤년은 502년 마다 발생

    return days;
}

int main() {
    int m1, d1, m2, d2;
    std::cin >> m1 >> d1 >> m2 >> d2;

    int days1 = dateToDays(2011, m1, d1);
    int days2 = dateToDays(2011, m2, d2);

    std::cout << days2 - days1 + 1 << std::endl;

    return 0;
}