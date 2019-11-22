#include <iostream>
#include<cmath>
using namespace std;
int main() {
	int k = 1,j=0;
	for (int i = 0; i < 10; i++) {
		cout << j+1 << "x" << k<<"="<<(j+1)*k<< " ";
		cout << j + 2 << "x" << k << "=" << (j + 1) * k << " ";
		cout << j + 3 << "x" << k << "=" << (j + 2) * k << " ";
		cout << j + 4 << "x" << k << "=" << (j + 3) * k << " ";
		cout << j + 5 << "x" << k << "=" << (j + 4) * k << " ";
		cout << j + 6 << "x" << k << "=" << (j + 5) * k << " ";
		cout << j + 7 << "x" << k << "=" << (j + 6) * k << " ";
		cout << j + 8 << "x" << k << "=" << (j + 7) * k << " ";
		cout << j + 9 << "x" << k << "=" << (j + 8) * k << " ";
		cout << j + 10 << "x" << k << "=" << (j + 10) * k << endl;
		k++;
	}
	return 0;
}
