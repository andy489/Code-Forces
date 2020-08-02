//github.com/andy489

#include <iostream>
 
using namespace std;
 
int n, i(1), a[200002];
 
void B(int k) {
    if (!k) return;
    B(a[k]);
    cout << k << ' ';
}
 
int main() {
    for (cin >> n; i++ < n;) cin >> a[i];
    B(n);
}
