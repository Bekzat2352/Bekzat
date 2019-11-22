#include <iostream>
#include<cmath>
using namespace std;
int main() {
	for (int i = 0; i <= 30; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < 5; j++) {
				cout << "1";
			}
		}
		else for (int j = 0; j < i; j++) {
			cout << j+1;
		}
		cout << endl;
	}
	return 0;
}
