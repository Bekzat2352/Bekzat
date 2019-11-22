  
#include <iostream>
#include<cmath>
using namespace std;
int main() {
	for (int i = 0; i <= 20; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < 10; j++) {
				cout << i;
			}
		}
		else for (int j = 0; j < 10; j++) {
			cout << "1";
		}
		cout << endl;
	}
	return 0;
}
