#include <iostream>
#include <vector>
#include <algorithm>

// 학생 구조체 정의
struct Student {
    int height;
    int weight;
    int index;
};

// 규칙에 따라 학생을 비교하는 함수
bool compareStudents(const Student &a, const Student &b) {
    if (a.height != b.height)
        return a.height > b.height; // 키가 더 큰 순으로 정렬
    else if (a.weight != b.weight)
        return a.weight > b.weight; // 키가 동일하면 몸무게가 더 큰 순으로 정렬
    else
        return a.index < b.index; // 키와 몸무게가 동일하면 번호가 작은 순으로 정렬
}

int main() {
    int n;
    std::cin >> n;

    std::vector<Student> students(n); // 학생들을 담을 벡터 생성

    // 학생 정보 입력 받기
    for (int i = 0; i < n; ++i) {
        students[i].index = i + 1; // 번호 부여
        std::cin >> students[i].height >> students[i].weight;
    }

    // 학생들을 주어진 규칙에 따라 정렬
    std::sort(students.begin(), students.end(), compareStudents);

    // 정렬된 학생들의 정보 출력
    for (const auto& student : students) {
        std::cout << student.height << " " << student.weight << " " << student.index << std::endl;
    }

    return 0;
}