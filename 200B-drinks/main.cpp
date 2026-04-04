#include <iostream>

int main() {
    int n;
    std::cin >> n;

    double sum = 0;
    double p;

    for (int i = 0; i < n; i++) {
        std::cin >> p;
        sum += p;
    }

    double result = sum / n;
    std::cout << result << std::endl;
}