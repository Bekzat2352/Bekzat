#include <iostream>
using namespace std;
int main()
{
	double s = 0;
	for (int i = 3; i <= 113; i+=2) {
		s = s + cos(i*1.0/(i+2));
	}cout << s;
}