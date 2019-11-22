#include <iostream>
using namespace std;
bool func(int i) {
	int flag=1, sum=0;
	int n = i;
	if (n % 2 == 0) {
		flag = flag;
	}
	else flag++;
	int z = i;
	z /= 100;
	z %= 10;
	if (z % 2 != 0) {
		flag = flag;
	}
	else {
		flag++;
	}
	int j = i;
	while (j != 0) {
		sum = sum + (j % 10);
		j /= 10;
	}
	if (sum % 4 == 0) {
		flag = flag;
	}
	else flag++;
	if (flag == 1) {
		return true;
	}
	else return false;
}
int main() {
	for (int i = 10000; i <= 99999; i++) {
		if (func (i)) {
			cout << i << endl;
		}
	}
	return 0;
}
