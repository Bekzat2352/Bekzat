#include <iostream>
using namespace std;
bool PrimeNum(int x) {
    for (int i = 2; i < x; i++ ) {
        if (0 == x % i) {
            return false;
        } else {
            continue;
        }
    }
}
int main() {
    int n;
    cin >> n;
        for (int i = 1; i < n; i++) {
            if (PrimeNum(i) && PrimeNum(i + 2)) {
                cout << "Pair:" << i << ' ' << i + 2 << endl;
            }
        }
    }
