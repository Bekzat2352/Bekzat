#include <iostream>
#include<cmath>
using namespace std;
bool func(int i) {
	int n = i;
	int a = i % 10;
	i /= 10;
	int b = i % 10;
	i /= 10;
	int c = i % 10;
	a = pow(a, 3);
	b = pow(b, 3);
	c = pow(c, 3);
	if (n == a + b + c) {
		return true;
	}
	else return false;
}
int main() {
	for (int i = 100; i <= 999; i++) {
		if (func (i)) {
			cout << i << endl;
		}
	}
	return 0;
}
