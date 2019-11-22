#include <iostream>
using namespace std;
bool func(int i) {
	while (i != 0) {
		if (i % 10 == 3) {
			return true;
			break;
		}
		i /= 10;
	}
}
int main() {
	for (int i = 1000; i <= 9999; i++) {
		if (func (i)) {
			cout << i << endl;
		}
	}
	return 0;
}
