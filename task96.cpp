#include <iostream>
using namespace std;
int main()
{
	int n, x;
	cin >> x>>n;
	double s = 0;
	for (int i = 1; i <= n; i++) {
		s = s + 1.0 / pow(cos(x), i);
	}cout << s;
}