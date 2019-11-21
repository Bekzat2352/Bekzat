#include <iostream>
using namespace std;

int main() {
    int n;
    int m;
    int a,b,c,d,e,f;
    cin >> n>>m;
    a = n/100;
    b = (n % 100)/10;
    c = n % 10;
    d= m/100;
    e = (m%100)/10;
    f = m % 10;
    int l = a*100000+b*10000+c*1000+d*100+e*10+f;
    cout << l;
    return 0;
}