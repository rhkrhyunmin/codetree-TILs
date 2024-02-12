#include <iostream>
#include <vector>
#include <algorithm>

// 학생 구조체 정의
struct Student {
    std::string name;
    int korean;
    int english;
    int math;
};

// 우선순위에 따라 학생을 비교하는 함수
bool compareStudents(const Student &a, const Student &b) {
    if (a.korean != b.korean)
        return a.korean > b.korean; // 국어 점수가 높은 순으로 정렬
    else if (a.english != b.english)
        return a.english > b.english; // 영어 점수가 높은 순으로 정렬
    else
        return a.math > b.math; // 수학 점수가 높은 순으로 정렬
}

int main() {
    int n;
    std::cin >> n;

    std::vector<Student> students(n); // 학생들을 담을 벡터 생성

    // 학생 정보 입력 받기
    for (int i = 0; i < n; ++i) {
        std::cin >> students[i].name >> students[i].korean >> students[i].english >> students[i].math;
    }

    // 학생들을 우선순위에 따라 정렬
    std::sort(students.begin(), students.end(), compareStudents);

    // 정렬된 학생들의 정보 출력
    for (const auto& student : students) {
        std::cout << student.name << " " << student.korean << " " << student.english << " " << student.math << std::endl;
    }

    return 0;
}