#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x;
    bool hard = false;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 1) {
            hard = true;
        }
    }

    if (hard) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }
}