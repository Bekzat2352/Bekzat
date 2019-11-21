#include <iostream>
using namespace std;
int main()
{
	for (int i = 1000; i <= 9999; i++) {
		int k = i % 10;
		int a = i / 10 % 10;
		int b = i / 10 / 10 % 10;
		int c = i / 10 / 10 / 10 % 10;
		if (k != a && a != b && b != c && k != b && k != c && a != c) {
			cout << i << " ";
		}
	}
}