#include <iostream>
using namespace std;
int main()
{
	int s = 0, i = 1, n;
	cin >> n;
	while (i < 2 * n)
	{
		s += i * (i + 1);
		++i;
	}
	cout << s;
}