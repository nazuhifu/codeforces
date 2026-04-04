#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int p[n], solution[n];

    for (int i = 0; i < n; i++) {
        std::cin >> p[i];
        solution[p[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        std::cout << solution[i] << " ";
    }
}