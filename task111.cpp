#include <iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	int m = 2 * n;
	for (int i = 0; i < m; i++) {
		cout << "A";
	}
	cout << endl;
	for (int i = 0; i < n-2; i++) {
		cout << "A";
		for (int j = 0; j < m-2; j++) {
			cout << "B";
		}
		cout<<"A";
		cout << endl;
	}
	for (int i = 0; i < m; i++) {
		cout << "A";
	}
	return 0;
}
