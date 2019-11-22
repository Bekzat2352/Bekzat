#include <iostream>
#include<cmath>
using namespace std;
int main() {
	int sum = 0;
	for (int j = 10; j != 0; j--) {
		for (int i = 0; i < j; i++) {
			cout << j<< " ";
			sum += j;
		}
		cout << endl;
	}
	cout << sum;
	return 0;
}
