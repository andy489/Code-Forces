// github.com/andy489

#include<iostream>
#include <set>

using namespace std;

set<int> s;

int main() {
    int n, x, i(0);
    cin >> n;
    for (; i < n; i++)
        cin >> x, s.insert(x);
    return cout << n - s.size() + 1, 0;
}
