 #include <iostream>
using namespace std;
 
int main() {
    int d,m,g;
    cin >> d;
    cin >> m;
    cin >> g;
    int temp = d;
    d=g;
    g =temp;
    cout<<d<<" "<<m<<" "<<g;
return 0;
}