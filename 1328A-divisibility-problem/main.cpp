#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;

    while (t--) {
        long long a, b;
        std::cin >> a >> b;

        std::cout << (b - a % b) % b << "\n";
    }

    return 0;
}