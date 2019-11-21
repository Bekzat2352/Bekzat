#include <iostream>
using namespace std;
int main()
{
	int n, a;
	cin >> a>>n;
	double s = 1;
	for (int i = 1; i <= n; i++) {
		s = s*(a+i)*(a+i);
	}cout << s;
}