#include <iostream>
using namespace std;
int main()
{
	double s = 0;
	for (int i = 2; i <= 9; i++) {
		s = s + i*1.0/(i+1);
	}cout << s;
}