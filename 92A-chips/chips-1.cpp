#include <iostream>
// https://codeforces.com/problemset/problem/92/A
using namespace std;

int main()
{
    int n, m, indeks = 1;
    cin >> n >> m;
    while (m >= indeks)
    {
        m = m - indeks;
        indeks++;
        if (indeks == n + 1)
            indeks = 1;
    }
    cout << m;
}
