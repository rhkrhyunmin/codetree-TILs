#include <iostream>
#include <vector>
#include <algorithm>

// 학생 구조체 정의
struct Student {
    std::string name;
    int score1;
    int score2;
    int score3;
    int totalScore;
};

// 총점을 비교하는 함수
bool compareStudents(const Student &a, const Student &b) {
    return a.totalScore < b.totalScore; // 총점이 낮은 순으로 정렬
}

int main() {
    int n;
    std::cin >> n;

    std::vector<Student> students(n); // 학생들을 담을 벡터 생성

    // 학생 정보 입력 받기
    for (int i = 0; i < n; ++i) {
        std::cin >> students[i].name >> students[i].score1 >> students[i].score2 >> students[i].score3;
        students[i].totalScore = students[i].score1 + students[i].score2 + students[i].score3; // 총점 계산
    }

    // 학생들을 총점이 낮은 순으로 정렬
    std::sort(students.begin(), students.end(), compareStudents);

    // 정렬된 학생들의 정보 출력
    for (const auto& student : students) {
        std::cout << student.name << " " << student.score1 << " " << student.score2 << " " << student.score3 << std::endl;
    }

    return 0;
}