#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::string prev, curr;
    int group = 1;

    std::cin >> prev;

    for (int i = 1; i < n; i++) {
        std::cin >> curr;

        if (curr != prev) {
            group++;
        }

        prev = curr;
    }

    std::cout << group << std::endl;
}