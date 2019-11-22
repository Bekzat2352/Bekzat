#include <iostream>
#include<cmath>
using namespace std;
bool func(int i) {
	int flag = 1;
	if (i % 11 != 0) {
		flag++;
	}
	for (int j = 1; j <= 10; j++) {
		if (i % j != 1) {
			flag++;
		}
	}
	if (flag == 1) {
		return true;
	}
	else return false;
}
int main() {
	while (3 < 4) {
		int i = 0;
		if (func(i)) {
			cout << i << endl;
		}
		i++;
	}
	return 0;
}
