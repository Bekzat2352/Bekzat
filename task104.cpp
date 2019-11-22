#include <iostream>
#include<cmath>
using namespace std;
bool func(int i) {
	float n = i;
	int a = i % 10;
	i /= 10;
	int b = i % 10;
	i /= 10;
	int c = i % 10;
	i /= 10;
	int d = i % 10;
	int sum = a + b + c + d;
	if (n /sum==600) {
		return true;
	}
	else return false;
}
int main() {
	for (int i = 1000; i <= 9999; i++) {
		if (func (i)) {
			cout << i << endl;
		}
	}
	return 0;
}
