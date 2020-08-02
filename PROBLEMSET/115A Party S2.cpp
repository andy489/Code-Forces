// github.com/andy489

#include <iostream>

using namespace std;

int main() {
    int n, i(1), a[2001], dep, curr, min(0);
    for (cin >> n; i <= n;)
        cin >> a[i++];
    for (i = 1; i <= n;) {
        dep = 0;
        curr = a[i++];
        while (curr != -1)
            ++dep, curr = a[curr];
        min = (dep > min ? dep : min);
    }
    cout << ++min;
}
