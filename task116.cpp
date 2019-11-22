#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (a > b) {
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	for (a; a <= b; a++) {
		if (a % 12 == 0) {
			cout << a<<endl;
		}
	}
}
