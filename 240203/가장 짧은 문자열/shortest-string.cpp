#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2, str3;

    // 입력 받기
    cin >> str1 >> str2 >> str3;

    // 각 문자열의 길이 계산
    int len1 = str1.length();
    int len2 = str2.length();
    int len3 = str3.length();

    // 가장 긴 문자열과 가장 짧은 문자열의 길이 차 계산
    int maxLength = max(max(len1, len2), len3);
    int minLength = min(min(len1, len2), len3);
    int difference = maxLength - minLength;

    // 결과 출력
    cout << difference << endl;

    return 0;
}