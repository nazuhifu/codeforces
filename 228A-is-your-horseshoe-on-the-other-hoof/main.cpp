#include <iostream>
#include <set>

int main() {
    std::set<int> colors;
    int s;

    for (int i = 0; i < 4; i++) {
        std::cin >> s;
        colors.insert(s);
    }

    std::cout << 4 - colors.size() << std::endl;
}
