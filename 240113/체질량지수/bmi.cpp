#include <iostream>
#include <cmath>

int main() {
    double height, weight;
    std::cin >> height >> weight;
    double bmi = weight / std::pow((height / 100.0), 2);

    int roundedBmi = static_cast<int>(bmi);

    std::cout << roundedBmi << std::endl;

    if (roundedBmi >= 25) {
        std::cout << "Obesity" << std::endl;
    }
    return 0;
}