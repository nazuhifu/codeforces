#include <iostream>
using namespace std;

int main() {
    int n, p, j, sum = 0;
    cin >> n;

    while(n) {
        cin >> p >> j;
        if (j - p >= 2) sum++;
        n--;
    }

    cout << sum << endl;
    return 0;
}